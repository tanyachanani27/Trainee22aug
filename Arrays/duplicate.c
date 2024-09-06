/*6.Write a program to remove duplicate elements from an array.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
int i;
int j, k=0;
int arr[]={1,1,1,2,4,5,6,6};
int size = sizeof(arr)/sizeof(int);

int temp[size];


for( i=0;i<size;i++)
{ int flag=0;
  for( j=i+1;j< size;j++)
   {
     if(arr[i]==arr[j])
	  {
	   flag=1;
	   break;
	  }
}

if(flag==0)
{
 temp[k]=arr[i];
 k=k+1;
}
}

for( i=0;i<k;i++)
{
 printf("%d\t",temp[i]);

 }
return EXIT_SUCCESS;
}

