#include<stdio.h>
int main() {
   //h=hours,m=minutes,s=seconds,ts=total seconds
   int h,m,s,ts;

   printf("enter hours : ");
   scanf("%d", &h);

   printf("enter minutes : ");
   scanf("%d", &m);

   printf("enter seconds : ");
   scanf("%d", &s);

   ts=h*3600+m*60+s;

   printf("the total time in seconds is : %d",ts);


}