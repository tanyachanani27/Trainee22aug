/*Write a program to calculate the sum and average of elements in an array. using pointers*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[5]={1,2,3,4,5};

  int *ptr;
  ptr=a;
 
 int sum=0;
  for(int i=0;i<5;i++)
  {
   sum= sum+*ptr;
   ptr++;
   }

   int avg;
   avg = sum/5;

	 printf("SUM IS:%d \n AVERAGE IS : %d\n",sum,avg);
	
   



return EXIT_SUCCESS;
}

