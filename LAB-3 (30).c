#include <stdio.h>
int main()
{
    // PROGRAM TO REVERSE OF A GIVEN NO.
    int n, re = 0, rem; // re=reverse,rem=remainder

    printf("enter the number : ");
    scanf("%d", &n);

    while (n == 0)
    {
        printf("0 \n");
        printf("enter the number : ");
        scanf("%d", &n);
    }
    while (n != 0)
    {
        rem = n % 10;
        re = re * 10 + rem;
        n = n / 10;
    }
    printf("reversed number is : %d", re);
    return 0;
}