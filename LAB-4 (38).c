#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT 1,4,9,16,25,………N
    int i, n, a;

    printf("enter the number : ");
    scanf("%d", &n);

    printf("1");
    for (i = 2; i <= n; i++)
    {
        a = i * i;
        printf(",%d", a);
    }

    return 0;
}