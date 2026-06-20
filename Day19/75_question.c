#include <stdio.h>

int main()
{
    int row, col, i, j;
    int num1[10][10], transpose[10][10];
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    printf("Enter matrix elements\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            transpose[j][i] = num1[i][j];
        }
    }
    printf("Transpose of matrix\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}