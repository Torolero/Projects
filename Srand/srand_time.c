#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random = rand();
    srand(time(0));

    printf("Seed = %d", time(0));
    printf("Random number = %d", random);
    return 0; 
}