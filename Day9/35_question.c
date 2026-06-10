#include <stdio.h>

int main()
{
    int a, b;
    char ch = 'A';
    for(a = 1; a <= 5; a++)
    {
        for(b = 1; b <= a; b++)
        {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}