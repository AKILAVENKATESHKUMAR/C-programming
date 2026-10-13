//Divisible 3 or 5:

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 3 == 0 || a % 5 == 0)
        printf("Divisible by 3 or 5");
    else
        printf("Not divisible");

    return 0;
}