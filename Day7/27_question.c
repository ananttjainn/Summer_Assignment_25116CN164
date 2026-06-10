#include <stdio.h>

int sum(int a)
{
    if (a == 0)
    return 0;

    return (a % 10) + sum(a / 10);
}
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = sum(a);
    printf("Sum = %d", b);
    return 0;
}