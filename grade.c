/* 7. Implement a small C program that performs the following tasks:
	Read an integer representing the student score.
	Read a character representing the Student Grade (A, B, C, D, or F).
	Print Your score is 90 and Grade is A. */


	#include<stdio.h>
    #include<ctype.h>
	int main()
	{
	 int marks;
	 char grade;
	 printf("ENTER THE SCORE AND GRADE FOR A STUDENT:\n");
	 scanf("%d %c",&marks,&grade);
	 printf("SCORE IS %d \n GRADE IS %c \n",marks,grade);
     
	 return 0;
	 }

