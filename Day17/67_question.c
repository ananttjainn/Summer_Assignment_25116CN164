#include <stdio.h>

int main()
{
    int a[5], b[5];
    int i, j;
    printf("Enter first array elements: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter second array elements: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Intersection of arrays: \n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}