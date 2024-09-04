/*3. C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);
 int n1=n;
int sq = n*n;
    int digit=0;

//count digits
   while(n!=0)
   {
    n= n/10;
   digit=digit+1;
 }

 int div=pow(10,digit);
 int lastdigit= sq%div;

if(lastdigit==n1)
{
 printf(" %d is an automorphic number.\n",n1);
}
else
{
printf(" %d is not a automorphic number.\n",n1);
 }
return EXIT_SUCCESS;
}

