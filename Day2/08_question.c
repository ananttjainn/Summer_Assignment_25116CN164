#include <stdio.h>

int main()
{
    int ogNum, tempNum, rem;
    int revNum = 0;

    printf("Enter a number: ");
    scanf("%d", &ogNum);

    tempNum = ogNum;

    while(tempNum != 0)
    {
        rem = tempNum % 10;
        revNum = revNum * 10 + rem;
        tempNum /= 10;
    }

    if(ogNum == revNum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}