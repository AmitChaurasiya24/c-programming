#include <stdio.h>
int main()
{
    /*WRITE A PROGRAM IN C FOR THE FOLLOWING:-
    AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS
Consumption in unit            Rate for Charge
0-200                          Rs 0.50 per unit
201-400                        Rs. 100 plus Rs 0.65 per unit excess of 200
401-600                        Rs. 230 plus Rs 0.80 per unit excess of 400
Above 600                      Rs. 425 plus Rs. 125 per unit excess of 600

Print the amount to be paid by the consumer*/

    int n;

    printf("enter the number of unit : ");
    scanf("%d", &n);

    if (n >= 0 && n <= 200)
    {
        printf("the amount to be paid is : Rs.%.2f", 0.50 * n);
    }

    else if (n >= 201 && n <= 400)
    {
        printf("the amount to be paid is : Rs.%.2f", 100 + 0.65 * (n - 201));
    }

    else if (n >= 401 && n <= 600)
    {
        printf("the amount to be paid is : Rs.%.2f", 230 + 0.80 * (n - 401));
    }

    else if (n > 600)
    {
        printf("the amount to be paid is : Rs.%.2f", 425 + 1.25 * (n - 600));
    }

    return 0;
}