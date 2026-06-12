#include <stdio.h>

int palindrome(int x)
{
    int a = x;
    int b = 0;
    while(x > 0)
    {
        b = b * 10 + x % 10;
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
    if(palindrome(x))
    printf("%d is a Palindrome Number", x);
    else
    printf("%d is Not a Palindrome Number", x);
return 0;
}