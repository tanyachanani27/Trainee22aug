/*Write a program to check if an array is a palindrome.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[]={1,2,3,2,1};
int size =sizeof(a)/sizeof(int);
int left=0;
int right=size-1;
int count=1;
while(left<=right)
{
	if(a[left]==a[right])
	{	
		left=left+1;
		right=right-1;
		// count =0;
	}
	else
	{
	 count=0;
	 break;
	 }
}

	if(count==0)
{
	printf("IT IS not A PALINDROME.\n");
}
else
{
	printf("IT IS  A PALINDROME.\n");
	}
return EXIT_SUCCESS;
}

