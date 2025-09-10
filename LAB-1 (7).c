#include <stdio.h>
int main()
{
    // calculation of area of triangle
    float b, h, a;
    // b=base,h=height,a=area
    printf("enter the value of base : ");
    scanf("%f", &b);
    printf("enter the value of height : ");
    scanf("%f", &h);
    a = 0.5 * b * h;
    printf("the area of triangle : %f \n", a);
    return 0;
}
