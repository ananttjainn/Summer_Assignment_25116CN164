#include <stdio.h>

int main()
{
    int num1[10][10];
    int size, i, j;
    int symmetric = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    printf("Enter matrix values: \n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(num1[i][j] != num1[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }
    if(symmetric == 1)
    printf("Matrix is symmetric.");
    else
    printf("Matrix is not symmetric.");
    return 0;
}