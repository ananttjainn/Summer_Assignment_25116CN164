#include <stdio.h>

void fibonacci(int x)
{
    int a = 0, b = 1, c, i;
    for(i = 1; i <= x; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int x;
    printf("Enter number of terms: ");
    scanf("%d", &x);
    fibonacci(x);
return 0;
}