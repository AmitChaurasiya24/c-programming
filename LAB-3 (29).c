#include <stdio.h>
int main()
{
    // PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT
    int n, re = 0, rem; // re=reverse,rem=remainder

    printf("enter the number : ");
    scanf("%d", &n);

    while (n == 0)
    {
        printf("reversed is : 0 \n");
        printf("enter the number : ");
        scanf("%d", &n);
    }
    int r = n;
    while (n != 0)
    {
        rem = n % 10;
        re = re * 10 + rem;
        n = n / 10;
    }

    if (r == re)
    {
        printf("the number is a pallindrom number");
    }
    else if (r != re)
    {
        printf("the number is not a pallindrom number");
    }

    return 0;
}