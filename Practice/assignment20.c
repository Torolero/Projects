#include <stdio.h>

struct test
{
    int test1;
    char test2;
    float test3;
};

int main(void)
{
    struct test variable = {50, 'W', 3.14};
    struct test second = {25};

    //variable.test1 = 50;
    //variable.test2 = 'W';
    //variable.test3 = 3.14;
    //second.test1 = 25;

    printf("This is the int: %i, this is the second int: %i this is the char: %c, this is the float: %.2f\n",variable.test1, second.test1, variable.test2, variable.test3);

    return 0;
}