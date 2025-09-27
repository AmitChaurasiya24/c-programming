#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT 1,3,5,7,9………N
    int i, n;

    printf("enter the number : ");
    scanf("%d", &n);

    printf("1");
    for (i = 3; i <= n; i = i + 2)
    {
        printf(",%d", i);
    }

    return 0;
}