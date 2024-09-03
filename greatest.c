/*Write a program that uses the ternary operator (?:) to find the maximum of two numbers*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a;
 int b;
 int result;
 printf("Enter two integers: \n");
 scanf("%d%d",&a,&b);

 result=(a>b)?a:b;

 printf("The greatest of %d and %d is %d \n ",a,b,result);

 return 0;
 }

