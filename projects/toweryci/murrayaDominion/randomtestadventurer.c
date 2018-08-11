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
		r = rand();
    struct gameState game1, game2;
  	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
  				 sea_hag, tribute, adventurer};
  	int bonus = 0;
  	initializeGame(2, k, r, &game1);
  	initializeGame(2, k, r, &game2);
  	game1.hand[0][0] = adventurer;
  	cardEffect(adventurer, 0, 0, 0, &game1, 0, &bonus);
    //checks to see if the game has changed after playing adventurer
    if(game1.playedCardCount == game2.playedCardCount) {
      printf("Test Failed\n");
      return 1;
    }
  }
  printf("Test Passed\n");
  return 0;
}
