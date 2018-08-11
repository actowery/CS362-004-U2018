#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//ensures smithy gives 3 cards
int main() {
	printf("Seeding rand and looping games...\n");
	srand(time(NULL));
	int x, r;
	for (x=0;x<1000;x++) {
		r = rand();
		struct gameState game1, game2;
		int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
					 sea_hag, tribute, smithy};
		int bonus = 0;
		initializeGame(2, k, r, &game1);
		initializeGame(2, k, r, &game2);
		game1.hand[0][0] = smithy;
		cardEffect(smithy, 0, 0, 0, &game1, 0, &bonus);
		if (game1.handCount[0] != (game2.handCount[0] + 3)) {
			printf ("smithy test failed");
			return 1;
		}
	}
	printf ("smithy test passed");

	return 0;
}
