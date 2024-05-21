#include <stdio.h>

int main(void)
{
    int players[4][5] = {{}, {}};

    // Outter for loop will define on a per game basis.
    for (int i = 0; i < 4; i++)
    {
        int games = i; 
        printf("Game #%i\n", games + 1);

        // Inner for loop will go through the players
        for (int j = 0; j < 5; j++)
        {

        //printf("Enter scoring total for Player # :");
        //scanf("%i", &players);

        }
    }
    printf("Player #XXX had the highest scoring average at XXX points per game.\n");
    // Create arrays that will store score totals and calculate the averages
}
