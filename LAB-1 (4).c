#include <stdio.h>
// conversion of fahrenheit into centigrade degrees
int main()
{
    // f=fahrenheit,c=centigrade
    float f, c;
    printf("enter the temperature in fahrenheit : ");
    scanf("%f", &f);
    c = 5.0 / 9 * (f - 32);
    printf("the temp. in centigrade : %f\n", c);
    return 0;
}
