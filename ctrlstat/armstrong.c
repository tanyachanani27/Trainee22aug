/*4. Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:

i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number".*/




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int n=num;
     int n2=num;
	int count = 0;
    while (num != 0)
	{
        num=num/ 10;
        count=count+1;
    }
 int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, count);
        n=n/ 10;
    }

if(sum ==n2)
{
 printf("yes its a armstrong number");
 }
 else
 {
 printf("no,it is not a armstrong number");
 }

return EXIT_SUCCESS;
}

