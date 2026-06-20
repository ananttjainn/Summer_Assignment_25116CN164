#include <stdio.h>

int main()
{
    int num1[10][10];
    int n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + num1[i][i];
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}