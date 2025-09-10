#include <stdio.h>
int main()
{
    // calculaion of simple interest
    // p=principal,r=rate,t=time,s=simple interest
    float p, r, t, s;
    printf("enter the principal value : ");
    scanf("%f", &p);
    printf("enter the rate : ");
    scanf("%f", &r);
    printf("enter the time : ");
    scanf("%f", &t);
    s = p * r * t / 100.0;
    printf("the value of simple interest : %f", s);
    return 0;
}