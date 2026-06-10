#include <stdio.h>

int main()
{
    int a, b, c, n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for(a = 1; a <= n; a++)
    {
        for(b = 1; b <= n - a; b++)
        printf(" ");
        for(c = 0; c < a; c++)
        printf("%c", 'A' + c);
        for(c = a - 2; c >= 0; c--)
        printf("%c", 'A' + c);
        printf("\n");
    }
    return 0;
}