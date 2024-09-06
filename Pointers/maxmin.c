/*Write a program to find the maximum and minimum elements in an array of integers. using pointers*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[5]={10,2,13,41,5};

  int *ptr;
  ptr=a;
  
  int max=a[0];
  int min=a[0];
for(int i=1;i<5;i++)
{
  if(max<*(ptr+i))
  {
    max= *(ptr+i);
	}
if(min>*(ptr+i))
{
 min=*(ptr+i);
 }
}

printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

return EXIT_SUCCESS;
}

