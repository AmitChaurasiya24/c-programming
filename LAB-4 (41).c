#include <stdio.h>
int main()
{
    // READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)

    int n, i, a;

    printf("enter the number : ");
    scanf("%d", &n);

    printf("1");
    for (i = 2; i <= n; i++)
    {
        a = n % i;
        if (a == 0)
        {
            printf(", %d", i);
        }
    }

    return 0;
}