#include<stdio.h>
int main() {
    // READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
    int n,i;
    while (1){
    	printf("enter the number : ");
    scanf("%d", &n);
	 
    if (n==2){
    	printf("the number is a prime number nor composite %d",n);
	}
    else if (n>2){
        for(i=3;i=n-1;i++){
            if(n%i==0){
                printf("the number is a composite number %d",n);
            }
            else if (n%i!=0){
                printf("the number is a prime number %d",n);
                return 0;
            }
        }
    } 

return 0;
}}