#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  struct gameState game1, game2;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
				 sea_hag, tribute, adventurer};
	int bonus = 0;
	initializeGame(2, k, 1, &game1);
	initializeGame(2, k, 1, &game2);
  printf ("Card test 2: adventurer\n");
	game1.hand[0][0] = adventurer;
	cardEffect(adventurer, 0, 0, 0, &game1, 0, &bonus);
  //checks to see if the game has changed after playing adventurer
  if(game1.playedCardCount != game2.playedCardCount) {
    printf("Test Passed\n");
  } else {
  printf("Test Failed = states not equivaent\n");
}
  return 0;
}
