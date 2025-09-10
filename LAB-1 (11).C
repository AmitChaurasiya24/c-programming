#include<stdio.h>
int main() {
    int a,b,c,d,e;
     
     printf("enter the time in seconds : ");
     scanf("%d", &a);
      
     b=a/3600;
     
     c=a%3600;
     d=c/60;
     

     e=c%60;
     printf("hours : %d \n",b);
     printf("minutes : %d \n",d);
     printf("seconds : %d \n",e);

    return 0;
}