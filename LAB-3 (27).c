#include <stdio.h>
int main()
{
    // PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT
    int i, n;

    while (1)
    {

        printf("enter the number : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("plz enter a +ve number \n");
        }
        else if (n == 0)
        {
            printf("Zero is not a prime number\n");
        }

        else if (n == 1)
        {
            printf("1 is neither prime nor a composite number\n");
        }

        else if (n > 1)
        {
            for (i = 2; i <= n - 1; i++)
            {
                if (n % i == 0)
                {
                    printf("the number is not a prime number");
                    return 0;
                }
            }
            printf("the number is a prime number\n");
            return 0;
        }
    }
}