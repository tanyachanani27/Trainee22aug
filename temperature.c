/*write a  C program that performs temperature conversions between Celsius to Fahrenheit.*/

#include<stdio.h>
int main()
{
 float cel,fah;
 printf("Enter the temperature in celsius: \n");
 scanf("%f",&cel);

 fah= (cel*9/5)+32;
 printf("THE CONVERTED TEMPERTURE IN FAHRENHEIT IS %f \n ",fah);

 return 0;
 }

