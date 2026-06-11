#include <stdio.h>

int fib(int a)
{
    if (a == 0)
    return 0;

    if (a == 1)
    return 1;

    return fib(a - 1) + fib(a - 2);
}

int main()
{
    int a, b, c;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    for (b = 0; b < a; b++)
    {
        c = fib(b);
        printf("%d ", c);
    }

    return 0;
}