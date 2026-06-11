#include <stdio.h>

int main()
{
    int a, b;
    for(a = 0; a <= 5; ++a)
    {
        for(b = 1; b <= 5 - a; ++b)
        printf("%d", b);

    printf("\n");
    }
    return 0;
}