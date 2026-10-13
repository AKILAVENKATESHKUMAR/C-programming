//Equal and not equal to

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    if (a == b)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}