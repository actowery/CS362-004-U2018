#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  struct gameState game1, game2;
	int k[10] = {outpost, gardens, embargo, village, minion, mine, cutpurse,
				 sea_hag, tribute, outpost};
	int bonus = 0;
	initializeGame(2, k, 1, &game1);
	initializeGame(2, k, 1, &game2);
  printf ("Card test 3: outpost\n");
	game1.hand[0][0] = outpost;
	cardEffect(outpost, 0, 0, 0, &game1, 0, &bonus);
  //checks to see if the game has changed after playing outpost
  if(game1.outpostPlayed) {
    printf("Test Passed\n");
  }
  else {
  printf("Test Failed = played states not equivaent\n");
}
  return 0;
}
