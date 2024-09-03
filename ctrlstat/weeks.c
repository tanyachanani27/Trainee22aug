
/*11. Write a program that asks the user to enter the number of days and then converts that value to weeks and days. 
For example, it would convert 18 days to 2 weeks, 4 days. Display results in the following format: 18 days are 2 weeks, 4 days.*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int days;
	printf("Enter the number of days:\n");
	scanf("%d",&days);

	int week=days/7;
	int day = week%7;

	printf("The equivalent of %d days is %d weeks and %d days \n",days,week,day);



return EXIT_SUCCESS;
}

