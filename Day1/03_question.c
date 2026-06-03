#include <stdio.h>

int main()
{
    int n, k;
    int factValue = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(k = n; k >= 1; k--)
    {
        factValue *= k;
    }

    printf("Factorial of %d = %d", n, factValue);

    return 0;
}