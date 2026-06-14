#include<stdio.h>

int main()
{
    int a[100], b, c, d, e = 0;
    printf("Enter size = ");
    scanf("%d", &b);
    printf("Enter numbers = \n");
    for(d = 0; d < b; d++)
    {
        scanf("%d", &a[d]);
    }
    printf("Enter number = ");
    scanf("%d", &c);
    for(d = 0; d < b; d++)
    {
        if(a[d] == c)
        {
            e++;
        }
    }
    printf("Frequency = %d", e);
    return 0;
}