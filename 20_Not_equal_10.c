//Not Equal to 10

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a != 10)
        printf("Not equal to 10");
    else
        printf("Equal to 10");

    return 0;
}