#include <stdio.h>

int fact(int a)
{
    if (a == 0 || a == 1)
    return 1;

    else
    return a * fact(a - 1);
}
int main()
{
    int a, b;
    printf("Enter a number = ");
    scanf("%d", &a);
    b = fact(a);
    printf("Factorial = %d\n", b);
    return 0;
}