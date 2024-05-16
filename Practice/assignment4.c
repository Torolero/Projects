#include <stdio.h>

int main(void)
{
    float user_input;

    printf("Enter the radius of your circle: ");

    scanf("%f", &user_input);

    float r2 = (user_input * user_input);
    float area;
    float pie = 3.14;
    area = (pie * r2);
    printf("The area of your circle is: %.6f\n", area);
}


//Enter the radius of your circle: 12.34
//The area of your circle is 478.145386