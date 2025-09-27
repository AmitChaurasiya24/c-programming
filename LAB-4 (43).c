#include <stdio.h>
int main()
{

    /*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
 If sales<=Rs. 500, commission is 5%
 If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
 If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
 If sales>5000, commission is 12.5%*/

    int n;
    float a;

    printf("enter the sales amount : ");
    scanf("%d", &n);

    if (n <= 500)
    {
        a = (0.05) * n;
        printf("the commission of salesman is :RS. %.2f", a);
    }

    else if (n > 500 && n <= 2000)
    {
        a = 35 + (0.01) * n;
        printf("the commission of salesman is :RS. %.2f", a);
    }

    else if (n > 2000 && n <= 5000)
    {
        a = 185 + (0.12) * n;
        printf("the commission of salesman is :RS. %.2f", a);
    }

    else if (n > 5000)
    {
        a = (0.125) * n;
        printf("the commission of salesman is :RS. %.2f", a);
    }

    return 0;
}