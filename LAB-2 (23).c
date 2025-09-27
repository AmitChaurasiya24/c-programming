#include <stdio.h>
int main()
{
    // PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)
    int a, b;

    printf("enter the base : ");
    scanf("%d", &a);

    printf("enter the exponent : ");
    scanf("%d", &b);

    int answer = 1;

    if (b < 0)
    {
        printf("exponent must be a +ve number ");
    }
    else
    {
        for (int i = 0; i < b; ++i)
        {
            answer = answer * a;
        }
    }
    printf("the answer is : %d \n", answer);

    return 0;
}