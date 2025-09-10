#include <stdio.h>
int main()
{
    // conversion into days, hours,minutes
    float d, h, m;
    int a = 31558150;
    m = a / 60;
    h = m / 60;
    d = h / 24;
    printf("the time in minutes : %f \n", m);
    printf("the time in hours : %f \n", h);
    printf("the time inn days : %f \n", d);
    return 0;
}
