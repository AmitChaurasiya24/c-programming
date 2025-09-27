#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
    int i, n;
    int t1 = 0, t2 = 1;
    int nextterm = t1 + t2;

    printf("enter the no. of terms : ");
    scanf("%d", &n);

    printf("the fibonacci series is : %d,%d,", t1, t2);
    for (i = 3; i <= n; ++i)
    {
        printf("%d,", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }

    return 0;
}