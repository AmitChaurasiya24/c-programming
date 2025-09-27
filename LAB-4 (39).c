#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N
    int n, i, fact = 1;
    float a, sum = 0.0;

    printf("enter the no. of terms : ");
    scanf("%d", &n);

    for (i = 1; i <= n - 1; i++)
    {
        printf("%d/%d!+", i, i);
    }
    printf("%d/%d!", n, n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        a = (float)i / fact;
        sum = sum + a;
    }
    printf(" = %.4f", sum);

    return 0;
}
