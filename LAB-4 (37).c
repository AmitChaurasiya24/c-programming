#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT 2,4,6,8,10,12………N
    int i, n;

    printf("enter the number : ");
    scanf("%d", &n);

    printf("2");
    for (i = 4; i <= n; i = i + 2)
    {
        printf(",%d", i);
    }

    return 0;
}