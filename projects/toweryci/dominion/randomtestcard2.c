#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Seeding rand and looping games...\n");
	srand(time(NULL));
	int x, r;
	for (x=0;x<1000;x++) {
		r = rand();  struct gameState game1, game2;
  	int k[10] = {gardens, gardens, embargo, village, minion, mine, cutpurse,
  				 sea_hag, tribute, gardens};
  	int bonus = 0;
  	initializeGame(2, k, 1, &game1);
  	initializeGame(2, k, 1, &game2);
  	game1.hand[0][0] = gardens;
    if (cardEffect(gardens, 0, 0, 0, &game1, 0, &bonus) != -1) {
      printf("Test Failed\n");
      return 1;
    }
  }
  return 0;
}
