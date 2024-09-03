/*5. BMI Calculator:
Extend BMI program and Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int bm;
printf("Enter the BMI:\n");
scanf("%d",&bm);

if(bm<18.5)
   printf("Under weight \n");
else if(bm>=18.5 && bm<=24.9)
   printf( "Normal weight \n");
else if(bm>=25 && bm<=29.9)
   printf("Overweight\n");
else
 printf( "Obesity\n");
return 0;
}

