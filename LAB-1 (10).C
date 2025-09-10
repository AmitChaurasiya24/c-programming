#include<stdio.h>
//calculation of cutoff marks
int main() {
    int M,P,C,E;
    float CM;
    /*M=marks in mathematics
      P=marks in physics
      C=marks in chemistry
      E=marks in entrance examination
      CM=cutoff marks*/

      printf("enter the marks in mathematics out of 200 : ");
      scanf("%d", &M);

      printf("enter the marks in physics out of 200 : ");
      scanf("%d", &P);

      printf("enter the marks in chemistry out of 200 : ");
      scanf("%d", &C);

      printf("enter the marks in entrance examination out of 100 : ");
      scanf("%d", &E);

      CM=M/2+P/2.0+C/2+E;

      printf("the cutoff marks of students is : %f",CM);
      return 0;
}

   

