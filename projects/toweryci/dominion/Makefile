CFLAGS = -Wall -fpic -coverage -lm -std=c99

unit1: dominion.o unittest1.c
	gcc -o unit1 unittest1.c -g dominion.o rngs.o $(CFLAGS)

unit2: dominion.o unittest2.c
	gcc -o unit2 unittest2.c -g dominion.o rngs.o $(CFLAGS)

unit3: dominion.o interface.o unittest3.c
	gcc -o unit3 unittest3.c -g dominion.o rngs.o interface.o $(CFLAGS)

unit4: dominion.o interface.o unittest4.c
	gcc -o unit4 unittest4.c -g dominion.o rngs.o interface.o $(CFLAGS)

card1: dominion.o interface.o cardtest1.c
	gcc -o card1 cardtest1.c -g dominion.o rngs.o interface.o $(CFLAGS)

card2: dominion.o interface.o cardtest2.c
	gcc -o card2 cardtest2.c -g dominion.o rngs.o interface.o $(CFLAGS)

card3: dominion.o interface.o cardtest3.c
	gcc -o card3 cardtest3.c -g dominion.o rngs.o interface.o $(CFLAGS)

card4: dominion.o interface.o cardtest4.c
	gcc -o card4 cardtest4.c -g dominion.o rngs.o interface.o $(CFLAGS)

tests.out: card1 card2 card3 card4 unit1 unit2 unit3 unit4
	echo "Unit Test 1:" >> tests.out
	./unit1 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Unit Test 2:" >> tests.out
	./unit2 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Unit Test 3:" >> tests.out
	./unit3 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Unit Test 4:" >> tests.out
	./unit4 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Card Test 1:" >> tests.out
	./card1 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Card Test 2:" >> tests.out
	./card2 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Card Test 3:" >> tests.out
	./card3 >> tests.out
	gcov dominion.c -b >> tests.out
	echo "Card Test 4:" >> tests.out
	./card4 >> tests.out
	gcov dominion.c -b >> tests.out

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player

clean:
	rm -f *.o playdom.exe unit1 unit2 unit3 unit4 card1 card2 card3 card4 playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
