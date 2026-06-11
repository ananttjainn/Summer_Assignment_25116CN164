#include <stdio.h>

int main()
{
    int start, end, flag;

    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter ending value: ");
    scanf("%d", &end);

    printf("Prime Numbers:\n");

    for(int num = start; num <= end; num++)
    {
        if(num < 2)
            continue;

        flag = 1;

        for(int j = 2; j <= num / 2; j++)
        {
            if(num % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", num);
    }

    return 0;
}