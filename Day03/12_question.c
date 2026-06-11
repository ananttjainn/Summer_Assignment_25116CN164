#include <stdio.h>

int main()
{
    int x, y, larger;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    larger = (x > y) ? x : y;

    while(1)
    {
        if(larger % x == 0 && larger % y == 0)
        {
            printf("LCM = %d", larger);
            break;
        }
        larger++;
    }

    return 0;
}