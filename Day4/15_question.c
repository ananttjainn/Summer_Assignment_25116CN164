#include <stdio.h>
#include <math.h>

int main()
{
    int number, original, digitCount = 0;
    int digit;
    int armstrongSum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(original != 0)
    {
        digitCount++;
        original /= 10;
    }

    original = number;

    while(original != 0)
    {
        digit = original % 10;
        armstrongSum += pow(digit, digitCount);
        original /= 10;
    }

    if(armstrongSum == number)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}