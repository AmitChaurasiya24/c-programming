#include<stdio.h>
int main() {
    //printing table of any number 
    int n,i;
    printf("enter the number : ");
    scanf("%d", &n);

    printf("the table is \n");
    for (i=1;i<=10;i++){
        printf("%d\n", n*i);
    }

    return 0;
}