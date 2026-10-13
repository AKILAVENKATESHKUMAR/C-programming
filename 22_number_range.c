//Number Within Range

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a >= 10 && a <= 50)
        printf("Number is between 10 and 50");
    else
        printf("Number is outside the range");

    return 0;
}