#include <stdio.h>

struct firstStruct
{
    char lastName[50];
    char firstName[50];
    int employeeId;
    int ssn;
    char title[50];
};

struct secondStruct
{
    struct firstStruct member1;
    struct firstStruct member2;
};

int main(void)
{
    struct secondStruct Struct2;
    Struct2.member2.firstName;
    Struct2.member2.lastName;
    Struct2.member2.employeeId;
    Struct2.member2.ssn;
    Struct2.member2.title;

    printf("Enter the employee's first name: ");
    scanf("%s", Struct2.member1.firstName);

    printf("Enter the employee's last name: ");
    scanf("%s", Struct2.member1.lastName);

    printf("Enter the employee's ID number: ");
    scanf("%i", Struct2.member1.employeeId);

    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%i", Struct2.member1.ssn);

    printf("Enter the employee's job title: ");
    scanf("%s", Struct2.member1.title);

    printf("Employee information for %s %s:\n", Struct2.member1.firstName, Struct2.member1.lastName);
    printf("ID: %i, SSN: %d, title: %s", Struct2.member1.employeeId, Struct2.member1.ssn, Struct2.member1.title);
    
}
