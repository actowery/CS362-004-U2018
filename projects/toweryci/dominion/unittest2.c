#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//checks to make sure getcost works properly
int main(int argc, char** argv)
{
  int j[10] = {6, 5, 4, 4, 5,
         4, 4, 3, 4, 3};
  int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};
  for (int i=0;i<10;i++) {
    assert(j[i] == getCost(k[i]));
  }
  printf("Unittest2 complete\n");
  return 0;
}
