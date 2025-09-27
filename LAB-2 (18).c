#include <stdio.h>
int main()
{
    // PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR
    int a, b, c;

    printf("enter the 1st number : ");
    scanf("%d", &a);

    printf("enter the 2nd number : ");
    scanf("%d", &b);

    printf("enter the 3rd number : ");
    scanf("%d", &c);

    a > b &&a > c ? printf("the 1st number is max : %d ", a) : printf(".");

    b > a &&b > c ? printf("the 2nd number is max : %d ", b) : printf(".");

    c > a &&c > b ? printf("the 3rd number is max : %d ", c) : printf(".");

    return 0;
}