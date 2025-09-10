#include <stdio.h>
// calculation of total marks and percentage
int main()
{
    // a=maths,b=physics,c=chemistry,d=hindi,e=english,t=total,p=percentage
    int a, b, c, d, e, t;
    printf("enter the marks of maths : ");
    scanf("%d", &a);
    printf("enter the marks of physics : ");
    sacnf("%d", &b);
    printf("enter the marks of chemistry : ");
    scanf("%d", &c);
    printf("enter the marks of hindi : ");
    scanf("%d", &d);
    printf("enter the matks of english : ");
    scanf("%d", &e);
    t = (a + b + c + d + e);
    float p;
    p = (t / 500.0) * 100;
    printf("the total marks : %d \n", t);
    printf("percentage : %f \n", p);
    return 0;
}
