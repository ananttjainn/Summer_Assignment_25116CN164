#include <stdio.h>

int perfect(int x)
{
    int a, b = 0;
    for(a = 1; a < x; a++)
    {
        if(x % a == 0)
        {
            b = b + a;
        }
    }
    if(b == x)
    return 1;
    else
    return 0;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(perfect(x))
    printf("%d is a Perfect Number", x);
    else
    printf("%d is Not a Perfect Number", x);
return 0; 
}