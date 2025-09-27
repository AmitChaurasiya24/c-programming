#include <stdio.h>
// printing maximum number
int main()
{
    int a, b, c;
    printf("enter the 1st number : ");
    scanf("%d", &a);
    printf("enter the 2nd number : ");
    scanf("%d", &b);
    printf("enter the 3rd number : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("1st number is maximum");
    }
    else if (b > c && b > a)
    {
        printf("2nd number is maximum");
    }
    else if (c > a && c > b)
    {
        printf("3rd number is maximum");
    }

    return 0;
}