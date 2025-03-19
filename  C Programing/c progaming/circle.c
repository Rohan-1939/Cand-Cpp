#include<stdio.h>
int main(){
   float P=3.14,r,area,cir;
   printf("Enter the radius of the circle \n");
   scanf("%f", &r);
   area = P*r*r;
   cir = 2*P*r;
   printf("Area of circle is  : %.2f \n",area);
   printf("circumference of circle is : %.2f \n",cir);
}