#include <stdio.h>
// determining given value is capital,small letter,digits and special symbols
int main()
{
    char ch;
    printf("enter the value : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("the given value is a capital letter \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("the given value is a small letter \n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("the given value is a a digit \n");
    }
    else
    {
        printf("the given value is a special symbol");
    }
    return 0;
}
