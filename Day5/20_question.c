#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("Enter a number = ");
    scanf("%d", &a);
    for (b = 2; b <= a; b++)
    {
        while (a % b == 0)
        {
            c = b;
            a = a / b;
        }
    }
    printf("Largest prime factor = %d", c);
    return 0;
}