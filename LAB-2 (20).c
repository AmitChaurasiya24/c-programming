#include <stdio.h>
int main()
{
    // PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE

    char ch;

    printf("what calculation you want (+,-,*,/) : ");
    scanf("%c", &ch);

    int a, b;
    
    printf("enter the 1st number : ");
    scanf("%d", &a);

    printf("enter the 2nd number : ");
    scanf("%d", &b);

    switch (ch)
    {
    case '+':
        printf("the addition is : %d ", a + b);
        break;
    case '-':
        printf("the substraction is : %d ", a - b);
        break;
    case '*':
        printf("the multiplication is : %d ", a * b);
        break;
    case '/':
        printf("the division is : %d ", a / b);
        break;
    default:
        printf("the operator is not correct");
    }

    return 0;
}