#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  struct gameState game1, game2;
	int k[10] = {gardens, gardens, embargo, village, minion, mine, cutpurse,
				 sea_hag, tribute, gardens};
	int bonus = 0;
	initializeGame(2, k, 1, &game1);
	initializeGame(2, k, 1, &game2);
  printf ("Card test 3: gardens\n");
	game1.hand[0][0] = gardens;
  if (cardEffect(gardens, 0, 0, 0, &game1, 0, &bonus) == -1) {
    printf("Test 4 Passed\n");
  }
  else {
    printf("Test 4 Fail\n");
  }
}
