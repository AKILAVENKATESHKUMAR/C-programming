//driving eligibility:


#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible for driving licence");
    else
        printf("Not eligible");

    return 0;
}