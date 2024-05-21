#include <stdio.h>

int main(void)
{
    float test = 10;
    float *ptr = &test;

    printf("%p", ptr);
}