/*Extend the program to find the maximum of three numbers using nested ternary operators.*/

#include<stdio.h>

int main()
{
 int a,b,c;
 int result;

 printf("ENTER THE THREE INTEGERS : \n ");
 scanf("%d%d%d",&a,&b,&c);

 result=(a>b)?((a>c)?a:c):((b>c)?b:c);

 printf("THE GREATEST OF (%d,%d,%d) is %d \n ",a,b,c,result);

 return 0;
 }
