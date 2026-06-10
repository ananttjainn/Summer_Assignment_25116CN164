#include <stdio.h>

int b = 0;
void reverse(int a)
{
    if (a == 0)
    return;

    b = b * 10 + a % 10;
    reverse(a / 10);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    reverse(a);
    printf("Reverse = %d", b);
    return 0;
}