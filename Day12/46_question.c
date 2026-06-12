#include <stdio.h>

int armstrong(int x)
{
    int a = x;
    int b = 0;
    int c;
    while(x > 0)
    {
        c = x % 10;
        b = b + (c * c * c);
        x = x / 10;
    }
    if(a == b)
    return 1;
    else
    return 0;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(armstrong(x))
    printf("%d is an Armstrong Number", x);
    else
    printf("%d is Not an Armstrong Number", x);
return 0;
}