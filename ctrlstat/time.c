
/*10. Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60.*/


#include<stdio.h>
#include<stdlib.h>
#define MINUTES_IN_HOUR 60

int main()
{
	int n1;
	printf("ENTER TIME IN MINUTES :\n");
	scanf("%d",&n1);
	int hrs = n1/ MINUTES_IN_HOUR;
	int minutes = n1% MINUTES_IN_HOUR; 
       
	   printf("%d minutes is equivalent to %d hours and %d minutes.\n", n1, hrs, minutes);


return EXIT_SUCCESS;
}

