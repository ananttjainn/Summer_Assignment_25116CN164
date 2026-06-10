#include <stdio.h>

int main()
{
    int a, b, c;
    for(a = 1; a <= 5; a++)
    {
        for(b = 1; b <= 5 - a; b++)
        printf(" ");
        for(c = 1; c <= a; c++)
        printf("%d", c);
        for(c = a - 1; c >= 1; c--)
        printf("%d", c);
        printf("\n");
    }
    return 0;
}