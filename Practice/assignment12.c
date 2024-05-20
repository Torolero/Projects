#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int coinFlips;

    printf("How many times would you like to flip the coin? ");
    scanf("%i", &coinFlips);

    void srand(unsigned int coinFlips);

    int heads = rand() % coinFlips;
    int tails = rand() % coinFlips;

    int rand(void);
<<<<<<< HEAD
    printf("After flipping the coin %i times, the results were\n %i heads\n %i tails\n", coinFlips, heads, tails);
}
=======
    _WCHAR_T_DEFINED
https: // www.tutorialspoint.com/rand-and-srand-in-c
}
>>>>>>> 04647de6ca2d05b909595e2512c2989c54b8c1d1
