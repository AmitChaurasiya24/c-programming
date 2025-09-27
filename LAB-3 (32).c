#include <stdio.h>

int main()
{
    int n, num;
    int max1, max2;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Please enter at least two numbers to find max and second max.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max1 = num;

    printf("Enter number 2: ");
    scanf("%d", &num);

    if (num > max1)
    {
        max2 = max1;
        max1 = num;
    }
    else
    {
        max2 = num;
    }

    for (int i = 3; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2 && num != max1)
        {
            max2 = num;
        }
    }

    printf("Maximum number: %d\n", max1);
    printf("Second maximum number: %d\n", max2);

    return 0;
}