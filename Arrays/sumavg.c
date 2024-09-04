/* Write a program to calculate the sum and average of elements in an array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[]={1,2,3,4,5};

int sum=0;
float avg=0;
int i=0;
for(i=0;i<5;i++)
{
  sum =sum+a[i];
 }
 avg=sum/5;
 printf("sum : %d \n",sum);
 printf("avg : %f \n",avg);



return EXIT_SUCCESS;
}

