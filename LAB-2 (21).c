#include <stdio.h>
int main()
{
    // PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE

    char ch;

    printf("what calculation you want (+,-,*,/) : ");
    scanf("%c", &ch);

    int c, d;

    printf("enter the 1st number : ");
    scanf("%d", &c);

    printf("enter the 2nd number : ");
    scanf("%d", &d);

    switch (ch)
    {
    case '+':
        printf("the addition is : %d ", c + d);
        break;
    case '-':
        printf("the substraction is : %d ", c - d);
        break;
    case '*':
        printf("the multiplication is : %d ", c * d);
        break;
    case '/':
        printf("the division is : %d ", c / d);
        break;
    default:
        printf("the operator is not correct");
    }

    return 0;
}