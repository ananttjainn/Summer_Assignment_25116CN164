#include <stdio.h>

int main()
{
    int row, col, i, j;
    int num1[10][10], num2[10][10], sum[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    printf("Enter elements of first matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &num2[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = num1[i][j] + num2[i][j];
        }
    }
    printf("Sum of matrices: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}