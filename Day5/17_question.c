#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("Enter a number = ");
    scanf("%d", &a);
    for (b = 1; b < a; b++)
    {
     if (a % b == 0)
     {
        c = c + b;
    }
}
if (c == a)
{
    printf("%d is a Perfect Number", a);
}
else
{
    printf("%d is not a Perfect Number", a);
}
return 0;
}