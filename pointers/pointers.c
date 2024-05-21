#include <stdio.h>

int main(void)
{
    int test = 10;
    int *ptr = &test;
    int* prt = &test;

    printf("%d\n", test);
    printf("%p\n", test);
    printf("%p\n", ptr);
    printf("%d\n", *prt);
}