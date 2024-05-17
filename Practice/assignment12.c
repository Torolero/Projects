#include <stdio.h>

int main(void)
{
    int coinFlips;
    printf("How many times would you like to flip the coin? ");
    scanf("%i", &coinFlips);

    printf("This number: %i", coinFlips);
}