#include <stdio.h>

int prime(int a)
{
    int b;
    if (a <= 1)
    return 0;
    for (b = 2; b < a; b++)
    {
        if (a % b == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (prime(a))
    printf("Prime Number");
    else
    printf("Not Prime Number");
    return 0;
}