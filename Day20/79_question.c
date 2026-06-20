#include <stdio.h>

int main()
{
    int num1[10][10];
    int rows, cols, i, j, sum;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter matrix values: \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
        sum = 0;
        for(j = 0; j < cols; j++)
        {
            sum = sum + num1[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}