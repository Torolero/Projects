#include <stdio.h>

struct stats
{
    float points;
    float games;
};



int main(void)
{
    struct stats player[5];
    struct stats players;

    for (int i = 0; i < 5; i++)
    {
        //player[i].games = i;
        printf("Enter Player %i's point total:", i + 1);
        scanf("%f", &player[i].points);

        printf("Enter Player %i's game total:", i + 1);
        scanf("%f", &players.games);
    }

    for (int j = 0; j < 5; j++)
    {
        float average = (player[j].points) / (players.games);
        printf("Player %i's scoring average was %.2f ppg.\n",j +1, average);
    }

    //int player1 = /*(player[0].points) / (5);*/ (player[0].points) / (players.games);
    //printf("%i", player1);

    /*int player2 = (player[1].points) / (players.games);
    printf("%i", player2);

    int player3 = (player[2].points) / (players.games);
    printf("%i", player3);

    int player4 = (player[3].points) / (players.games);
    printf("%i", player4);

    int player5 = (player[0].points) / (players.games);
    printf("%i", player5);*/
}