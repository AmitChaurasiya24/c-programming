#include <stdio.h>

int main()
{
    int n, num, max, min, i;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of elements must be greater than 0.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }

        if (num < min)
        {
            min = num;
        }
    }

    printf("\nThe maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);

    return 0;
}