#include <stdio.h>

struct example
{
  int integer;
};

int main(void)
{
    struct example *ptr;
    struct example test;

    ptr = &test;

    test.integer = 5;
    printf("%i\n", test.integer);

    (*ptr).integer = 6;
    printf("%d\n", (*ptr).integer);

    ptr->integer = 7;
    printf("%i\n", ptr->integer);


}





