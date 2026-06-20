#include <stdio.h>

int main()
{
    int a[5], b[5], c[10];
    int i, j, k = 0, found;
    printf("Enter first array elements: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        c[k++] = a[i];
    }
    printf("Enter second array elements: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 5; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
        c[k++] = b[i];
        }
    }
    printf("Union of arrays: \n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}