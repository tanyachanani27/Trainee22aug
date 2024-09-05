/*1. Write a program to reverse the elements of an array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a[]={1,2,3,4,5,6};
  printf("The reverse pattern is:\n");
  int s= sizeof(a)/sizeof(int);
  int i;
 for(i =s-1;i>=0;i--)
 {
  printf("%d\t",a[i]);
 }

printf("\n");


return EXIT_SUCCESS;
}

