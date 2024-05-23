#include <stdio.h>


int main(void)
{
    float players[4][5] = {{0}, {0}};

    // Outter for loop will define on a per game basis.
    for (int i = 0; i < 4; i++)
    {
        int games = i;
        printf("Game #%i\n", games + 1);

        // Inner for loop will go through the players
        for (int j = 0; j < 5; j++)
        {
            int playerNumber = j;
            printf("Enter scoring total for Player #%i:", playerNumber + 1);
            scanf("%f", &players[i][j]);
        }
    }
    float p1 = (players[0][0] + players[1][0] + players[2][0] + players[3][0]) / (4);
    float p2 = (players[0][1] + players[1][1] + players[2][1] + players[3][1]) / (4);
    float p3 = (players[0][2] + players[1][2] + players[2][2] + players[3][2]) / (4);
    float p4 = (players[0][3] + players[1][3] + players[2][3] + players[3][3]) / (4);
    float p5 = (players[0][4] + players[1][4] + players[2][4] + players[3][4]) / (4);

    if (p1 > p2 && p1 > p3 && p1 > p4 && p1 > p5)
        printf("Player #1 had the highest scoring average at %.2f points per game.\n", p1);

    else if (p2 > p1 && p2 > p3 && p2 > p4 && p2 > p5)
        printf("Player #2 had the highest scoring average at %.2f points per game.\n", p2);

    else if (p3 > p1 && p3 > p2 && p3 > p4 && p3 > p5)
        printf("Player #3 had the highest scoring average at %.2f points per game.\n", p3);

    else if (p4 > p1 && p4 > p2 && p4 > p3 && p4 > p5)
        printf("Player #4 had the highest scoring average at %.2f points per game.\n", p4);

    else
        printf("Player #5 had the highest scoring average at %.2f points per game.\n", p5);

    return 0;

    /*printf("Player score #1: %.2f\n", p1);
    printf("Player score #2: %.2f\n", p2);
    printf("Player score #3: %.2f\n", p3);
    printf("Player score #4: %.2f\n", p4);
    printf("Player score #5: %.2f\n", p5);*/

    // Now have the ability to calculate all scores and average them out. Need to have the abilityto compare them and see which one is higher.

    // printf("Player #XXX had the highest scoring average at XXX points per game.\n");
    //  Create arrays that will store score totals and calculate the averages
}
