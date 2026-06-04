#include <stdio.h>
#include <math.h>

int main()
{
    int start, end;

    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter ending value: ");
    scanf("%d", &end);

    printf("Armstrong Numbers:\n");

    for(int num = start; num <= end; num++)
    {
        int temp = num;
        int digits = 0;
        int sum = 0;

        while(temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0)
        {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}