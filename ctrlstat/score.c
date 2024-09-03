/*3. Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
Print the grade.*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
int sc;
	printf("ENTER A SCORE:\n");
	scanf("%d",&sc);

	if(sc>=90 && sc<=100)
	printf("The grade is A \n ");
else if(sc>=80 && sc<=89)
      printf("The grade is B \n ");
else if(sc>=70&& sc<=79)
      printf("The grade is C \n ");
else if(sc>=60 && sc<=69)
      printf("The grade is D \n ");
else
     printf("The grade is F \n ");


return 0;
}

