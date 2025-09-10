#include <stdio.h>
// calculation of gross salary
int main()
{
    // bs=basic salary,da=dearence allow,hra=house rent allowance,ta=transportation allowance,t=total salary
    int bs;
    printf("enter the basic salary : ");
    scanf("%d", &bs);
    float da, hra, ta;
    da = (10 / 100.0) * bs;
    hra = (5 / 100.0) * bs;
    ta = (2 / 100.0) * bs;
    printf("the dearance allowance : %f\n", da);
    printf("the house rent allowance : %f\n", hra);
    printf("the transportation allowance : %f\n", ta);
    float t;
    // t=total gross salary
    t = bs + da + hra + ta;
    printf("the gross salary : %f\n", t);
    return 0;
}
