#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//ensures smithy gives 3 cards
int main() {
	struct gameState game1, game2;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
				 sea_hag, tribute, smithy};
	int bonus = 0;
	initializeGame(2, k, 1, &game1);
	initializeGame(2, k, 1, &game2);
  printf ("Card test 1: Smithy\n");
	game1.hand[0][0] = smithy;
	cardEffect(smithy, 0, 0, 0, &game1, 0, &bonus);
	if (game1.handCount[0] == (game2.handCount[0] + 3)) {
		printf ("smithy test passed");
	} else {
		printf ("smithy test failed");

	}
	return 0;
}
