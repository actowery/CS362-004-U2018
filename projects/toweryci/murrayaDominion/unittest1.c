#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
//checks to make sure whoseturn works properly
int main(int argc, char** argv)
{
	srand(time(NULL));
	int turnPlayer = rand();
	struct gameState* state = malloc(sizeof(struct gameState));
	state->whoseTurn = turnPlayer;
	int turn = whoseTurn(state);
	assert(turn == turnPlayer);
  printf("Unittest1 complete\n");

	return 0;
}
