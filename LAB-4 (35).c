#include <stdio.h>

int main()
{
    // READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N

    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 9)
    {
        sum = 0;

        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    printf("The single-digit sum is: %d\n", (int)n);

    return 0;
}