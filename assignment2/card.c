#include <stdio.h>
#include "card.h"
#include <stdio.h>

#define NEW_Card { "", 0}

int main()
{
    struct card ctest = NEW_Card;

    ctest.suit[0] = 2;
    //struct cart ctest = {"C", 1}
    ctest.rank[0] = 1;
    //printf("Hello World!");
    //printf("%d", sizeof(suit));
    printf("suit : %d\n",   ctest.suit[0]);
    printf("Rank : %d\n",   ctest.rank[0]);
    return 0;
}
