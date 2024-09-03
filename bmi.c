/* Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). (Formula bmi =weight/(height * height) */

#include<stdio.h>
#include<stdlib.h>

int main()
{
  float  weight ,height;
  printf("Enter the weight: \n");
  scanf("%f",&weight);
  printf("Enter the height: \n");
  scanf("%f",&height);

  float bmi =( weight/(height*height));
  printf("THE BODY MASS INDEX OF THE USER IS %f \n",bmi);

  return 0;
  }

