#include <stdio.h>

int main()
{
    int a, b, c, d, e = 0, f = 1;
    printf("Enter a number = ");
    scanf("%d", &a);
    b = a;
    while (b > 0)
    {
        c = b % 10;
        f = 1;
        for (d = 1; d <= c; d++)
        {
            f = f * d;
        }
        e = e + f;
        b = b / 10;
    }
    if (e == a)
    {
        printf("%d is a Strong Number", a);
    }
    else
    {
        printf("%d is not a Strong Number", a);
    }
    return 0;
}