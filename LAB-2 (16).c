#include <stdio.h>
int main()
{
    // program to read three no. and print max
    int a, b, c;

    printf("enter the 1st number : ");
    scanf("%d", &a);

    printf("enter the 2nd number : ");
    scanf("%d", &b);

    printf("enter the 3rd number : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (b > c)
            printf("the 1st number is max : %d", a);
    }
    else if (a > c)
    {
        if (c > b)
            printf("the 1st number is max : %d", a);
    }

    else if (b > a)
    {
        if (a > c)
            printf("the 2nd number is max : %d", b);
    }
    else if (b > c)
    {
        if (c > a)
            printf("the 2nd number is max : %d", b);
    }

    else if (c > a)
    {
        if (a > b)
            printf("the 3rd number is max : %d", c);
    }
    else if (c > b)
    {
        if (b > a)
            printf("the 3rd number is max : %d", c);
    }

    return 0;
}