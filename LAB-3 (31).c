#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO
    int n;
    int sum = 0, digit;
    printf("enter the number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("the sum of digit is : %d", sum);

    return 0;
}