#include <stdio.h>
// printing division
int main()
{
    int a, b, c, d, e;

    printf("enter the marks in maths out of 100 : ");
    scanf("%d", &a);

    if (a >= 0 && a < 60)
    {
        printf("division : fail \n");
    }

    else if (a >= 60 && a < 80)
    {
        printf("division : C \n");
    }

    else if (a >= 80 && a < 90)
    {
        printf("division : B \n");
    }
    else if (a >= 90 && a <= 100)
    {
        printf("division : A \n");
    }

    printf("enter the marks in physics out of 100 : ");
    scanf("%d", &b);

    if (b >= 0 && b < 60)
    {
        printf("division : fail \n");
    }

    else if (b >= 60 && b < 80)
    {
        printf("division : C \n");
    }

    else if (b >= 80 && b < 90)
    {
        printf("division : B \n");
    }
    else if (b >= 90 && b <= 100)
    {
        printf("division : A \n");
    }

    printf("enter the marks in chemistry out of 100 : ");
    scanf("%d", &c);

    if (c >= 0 && c < 60)
    {
        printf("division : fail \n");
    }

    else if (c >= 60 && c < 80)
    {
        printf("division : C \n");
    }

    else if (c >= 80 && c < 90)
    {
        printf("division : B \n");
    }
    else if (c >= 90 && c <= 100)
    {
        printf("division : A \n");
    }

    printf("enter the marks in english out of 100 : ");
    scanf("%d", &d);

    if (d >= 0 && d < 60)
    {
        printf("division : fail \n");
    }

    else if (d >= 60 && d < 80)
    {
        printf("division : C \n");
    }

    else if (d >= 80 && d < 90)
    {
        printf("division : B \n");
    }
    else if (d >= 90 && d <= 100)
    {
        printf("division : A \n");
    }

    printf("enter the marks in hindi out of 100 : ");
    scanf("%d", &e);

    if (e >= 0 && e < 60)
    {
        printf("division : fail \n");
    }

    else if (e >= 60 && e < 80)
    {
        printf("division : C \n");
    }

    else if (e >= 80 && e < 90)
    {
        printf("division : B \n");
    }
    else if (e >= 90 && e <= 100)
    {
        printf("division : A \n");
    }
    return 0;
}
