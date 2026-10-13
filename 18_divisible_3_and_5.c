//Divisible by 3 and 5

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 5 == 0)
        printf("Divisible by both 3 and 5");
    else
        printf("Not divisible by both");

    return 0;
}

