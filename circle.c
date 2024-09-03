/*AREA AND CIRCUMFERENCE OF CIRCLE */

#include<stdio.h>
#include<stdlib.h>
#define PI 3.15

int main()
{
 float area;
 float cir;
 float r;
 printf("ENTER RADIUS :");
 scanf("%f" ,&r);
 area=PI*r*r;
 cir=2*PI*r;
 printf("THE AREA OF CIRCLE IS %f \n ",area);
 printf("THE CIRCUMFERENCE OF CIRCLE IS %f \n" ,cir);

 return 0;
 }
