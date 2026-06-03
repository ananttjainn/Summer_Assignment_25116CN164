#include <stdio.h>

int main()
{
    int value, digit,product = 1;

    printf("Enter a number: ");
    scanf("%d", &value);

    while(value > 0)
    {
        digit = value % 10;
        product *= digit;
        value /= 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}