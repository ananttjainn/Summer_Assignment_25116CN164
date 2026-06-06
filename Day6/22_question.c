#include <stdio.h>
int main()
{
    int binary, decimal = 0, a = 1, b;
    printf("Enter a binary number = ");
    scanf("%d", &binary);
    while (binary > 0)
    {
        b = binary % 10;
        decimal = decimal + b * a;
        a = a * 2;
        binary = binary / 10;
    }
    printf("Decimal number = %d\n", decimal);
    return 0;
}