#include <stdio.h>
int main()
{
    // PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N
    int odd, even, n;

    printf("enter the natural number N : ");
    scanf("%d", &n);

    // for odd
    int i, sum = 0;
    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + i;
    }

    // for even
    int j, add = 0;
    for (j = 0; j <= n; j = j + 2)
    {
        add = add + j;
    }

    int total = sum + add;

    printf("the sum of odd number is : %d \n", sum);
    printf("the sum of even number is : %d \n", add);
    printf("the total sum of all number is : %d", total);

    return 0;
}