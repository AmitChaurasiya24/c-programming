#include <stdio.h>
int main()
{
    // PROGRAM TO CALCULATE FACTORIAL OF A NO.
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int i = 1, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of no. : %d", fact);
    return 0;
}