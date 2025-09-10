#include <stdio.h>
// swaping two variables using third variable
int main()
{

    int a, b;

    printf("enter the number 1 : ");
    scanf("%d", &a);

    printf("enter the number 2 : ");
    scanf("%d", &b);

    printf("after swapping the result \n");

    int c;
    c = a;
    a = b;
    b = c;

    printf("the value of number 1 becomes : %d\n", a);

    printf("the value of numbers 2 becomes : %d\n", c);

    return 0;
}
