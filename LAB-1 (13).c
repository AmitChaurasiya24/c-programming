#include <stdio.h>
// determining a number is even or odd
int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the given number is even \n");
    }
    else
    {
        printf("the given number is odd \n");
    }
    return 0;
}