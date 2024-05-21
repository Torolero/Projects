#include <stdio.h>

int main(void)
{
    int p1, p2, p3, p4, p5;
    int G1, G2, G3, G4;
    int players[4][5] = {{}, {}};
    // Outter for loop will define on a per game basis.
    for (int i = 0; i < 4; i++)
    {
        printf("Game # \n");

        printf("Enter scoring total for Player # :");
        scanf("%i", &players);

        // Inner for loop will go through the players
        for (int j = 0; j < 5; j++)
        {
            /* code */
        }
    }
    printf("Player #XXX had the highest scoring average at XXX points per game.\n");
    // Create arrays that will store score totals and calculate the averages
}
