#include <stdio.h>

struct stats {
  int points;
  int games;
};

struct stats player[5];

int main(void)
{
    struct stats players;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Player %i's point total:", i +1);
        scanf("%i", &players.points);

        printf("Enter Player %i's game total:", i +1);
        scanf("%i", &players.games);
    }
    

}