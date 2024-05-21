#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int coinFlips;

    printf("How many times would you like to flip the coin? ");
    scanf("%i", &coinFlips);

    srand(time(0));

    int heads = rand() % coinFlips;
    int tails = coinFlips - heads;
    // The program works until here, it will give you two random values between 0 and your input. Now I need to figure out how to make them equal to user input when added together.

    printf("After flipping the coin %i times, the results were\n %i heads\n %i tails\n", coinFlips, heads, tails);
}
