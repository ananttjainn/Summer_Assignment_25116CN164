#include <stdio.h>

int main()
{
    int firstNum, secondNum, gcd;

    printf("Enter two numbers: ");
    scanf("%d%d", &firstNum, &secondNum);

    int limit = (firstNum < secondNum) ? firstNum : secondNum;

    for(int i = limit; i >= 1; i--)
    {
        if(firstNum % i == 0 && secondNum % i == 0)
        {
            gcd = i;
            break;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
}