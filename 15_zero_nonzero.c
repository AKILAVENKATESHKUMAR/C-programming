// Zero or Non-Zero

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0)
        printf("Zero");
    else
        printf("Non-Zero");

    return 0;
}