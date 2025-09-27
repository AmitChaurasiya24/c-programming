#include<stdio.h>
int main() {
    // READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
    int n,sum=0;
   
    printf("enter the number : ");
    scanf("%d", &n);

    for(;n>0;){
        sum=sum+n;
        printf("enter the number : ");
        scanf("%d", &n);


}
 printf("the sum of all +ve number is : %d",sum);
if(n<0){
    return 0;
}
   
   
    
    return 0;
}