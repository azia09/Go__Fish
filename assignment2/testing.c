#include <stdio.h>


int main()
{
    int i=0;

    char suit[4][10] = {
            "C",
            "D",
            "H",
            "S"
        };

    for(i=0;i<=4;i++)
    {
        printf("%s\n",suit[i]);
    }

    return 0;

}