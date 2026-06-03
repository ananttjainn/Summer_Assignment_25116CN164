#include <stdio.h>

int main()
{
    int num, rem, reverseNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10;
        reverseNum = reverseNum * 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d", reverseNum);

    return 0;
}