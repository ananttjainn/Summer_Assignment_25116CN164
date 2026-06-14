#include <stdio.h>

int main()
{
    int a[100], b, c, d, e;
    printf("Enter size = ");
    scanf("%d", &b);
    printf("Enter numbers = \n");
    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }
    d = a[0];
    e = a[0];
    for(c = 1; c < b; c++)
    {
        if(a[c] > d)
        {
            e = d;
            d = a[c];
        }
        else if(a[c] > e && a[c] != d)
        {
            e = a[c];
        }
    }
    printf("Second largest = %d", e);
    return 0;
}