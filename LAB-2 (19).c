#include <stdio.h>
int main()
{
    // PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR
    char ch;

    printf("enter the character : ");
    scanf("%c", &ch);

    ch >= 'a' && ch <= 'z' ? printf("the character is small case : %c", ch) : printf("the character is other than small case letter : %c", ch);

    return 0;
}