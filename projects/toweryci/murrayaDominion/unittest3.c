#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//checks to make sure newgame works properly by making the proper sized gamestate
//meaning it has changes sizes since init
int main(int argc, char** argv)
{
  struct gameState* g;
  g = newGame();
  assert(sizeof(struct gameState) != sizeof(g));
}
