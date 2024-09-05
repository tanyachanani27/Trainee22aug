/*2. Write a program to search for a specific element in an array and print its index if found.*/




#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[] ={11,33,45,66,89,90};
   printf("Enter the element to be searched:\n");
   int s;
   scanf("%d",&s);

   int size = sizeof(a)/sizeof(int);
   for(int i=0;i<size;i++)
   {
     if(a[i]==s)
	 {
	  printf("Found at index %d\n",i);
	  }
	  
	}
	
	  
return EXIT_SUCCESS;
}

