/*Write a program to initialize an array with the first 10 natural numbers and print the elements.*/





#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int i;
  for(i=0;i<10;i++)
  {
  printf("the elements are as follows:\n %d\t",a[i]);
  }



return EXIT_SUCCESS;
}

