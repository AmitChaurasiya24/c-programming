#include<stdio.h>
#include<math.h>
int main() {
	/*program to find the value of y using 
	                     1+x     where n=1
	      y(x,n)=        1+x/n   where n=2     
	                     1+x^n   where n=3
	                     1+nx    where n>3 or n<1*/
	                     
     int a,b,c,d,n,x;
     
     printf("enter the value of x : ");
     scanf("%d", &x);
     
     printf("enter the value of n : ");
     scanf("%d", &n);
     
     a=1+x;
     b=1+x/n;
     c=1+pow(x,n);
     d=1+n*x;
     
     if (n==1){
     	printf("the value of y : %d",a);
	 }
	 
	 else if (n==2){
	 	printf("the value of y : %d",b);
	 }
	 
	 else if (n==3){
	 	printf("the value of y : %d",c);
	 }
	 
	 else {
	 	printf("the value of y : %d",d);
	 }
	            
	return 0;
}
