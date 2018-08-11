#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//checks to make sure kingdomcards works properly by making the proper cards are racked
int main(int argc, char** argv)
{

  int* k = kingdomCards(1,2,3,4,5,6,7,8,9,10);
  for(int i=0;i<10;i++) {
    assert(k[i] == (i+1));
  }
  printf("Unittest4 complete\n");
  return 0;
}
