/*Write a program to read and print array elements using pointers*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[5]={1,2,3,4,5};

  int *ptr;
  ptr=a;
  printf("enter array elements:\n");
  for(int i=0;i<5;i++)
  {
    scanf("%u",(ptr+i));
	}

	for(int j=0;j<5;j++)
	{
	 printf("%u\n",*ptr);
	 ptr++;
	 }
   



return EXIT_SUCCESS;
}

