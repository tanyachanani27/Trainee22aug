/*7. Write a C program that takes an integer input from the user and prints whether it is positive, negative, or zero.*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("enter the integer: \n");
	scanf("%d",&n);

	if(n>0)
	printf("Its a positive number.\n");
	else if(n<0)
	printf("Its a negative number .\n");
	else
	printf("The number is zero.\n");



return EXIT_SUCCESS;
}

