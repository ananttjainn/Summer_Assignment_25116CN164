#include <stdio.h>

int main()
{
    int a[100], b, c, d;
    printf("Enter size = ");
    scanf("%d", &b);
    printf("Enter numbers = \n");
    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }
    printf("Duplicate elements are = \n");
    for(c = 0; c < b; c++)
    {
        for(d = c + 1; d < b; d++)
        {
            if(a[c] == a[d])
            {
                printf("%d ", a[c]);
                break;
            }
        }
    }
    return 0;
}