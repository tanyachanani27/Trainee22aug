/*Write a program to initialize an array with the first 10 natural numbers and print the elements.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
  int a[MAX];

  int *ptr;
  ptr=a;
  printf("enter array elements:\n");
  for(int i=0;i<MAX;i++)
  {
    scanf("%u",(ptr+i));
	}

	for(int j=0;j<MAX;j++)
	{
	 printf("%d\n",*ptr);
	 ptr++;
	 }
   



return EXIT_SUCCESS;
}

