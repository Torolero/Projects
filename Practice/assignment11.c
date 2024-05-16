#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int testScores;
    do
    {

        printf("Enter a test score:");
        scanf("%i", &testScores);

    } while (testScores <= 0 || testScores > 100);

    char decision;
    float average;
    bool trueFalse = 1;

    do
    {
        printf("Would you like to continue? Y/N: ");
        scanf("%s", &decision);

        if (decision == 'y' || decision == 'Y')
        {
            printf("Enter a test score:");
            scanf("%i", &testScores);
        }
        else
        {
            printf("%f is the average.\n", average);
            trueFalse = 0;
        }

    } while (trueFalse);
}
