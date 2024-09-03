/*Write a program to perform simple arithmetic operation on two integers.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a;
  int b;
  int add,sub,mul,div,mod;

  printf("ENTER TWO INTERGERS:");
  scanf("%d%d",&a,&b);

  add=a+b;
  sub=a-b;
  mul=a*b;
  div=a%b;
  mod=a/b;

 printf("SUM OF %d and %d is %d \n",a,b,add);
 printf("SUBTRACTION  OF %d and %d is %d \n",a,b,sub);
 printf("MULTIPLICATION OF %d and %d is %d \n",a,b,mul);
 printf("REMAINDER OF %d and %d is %d \n",a,b,div);
 printf("MODULUS OF %d and %d is %d \n",a,b,mod);

 return 0;
 }

