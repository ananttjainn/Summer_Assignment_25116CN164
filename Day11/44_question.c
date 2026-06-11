#include <stdio.h>

int factorial(int a)
{
    int b, c = 1;
    for (b = 1; b <= a; b++)
    c = c * b;
    return c;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Factorial = %d", factorial(a));
    return 0;
}