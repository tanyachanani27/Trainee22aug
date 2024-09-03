/*
6. Write a C program that takes a percentage input from the user and prints the corresponding grade based on the following criteria:
>= 90: Grade A
>= 80: Grade B
>= 70: Grade C
>= 60: Grade D
< 60: Fail*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
 int per;
     printf("ENTER the percentage:\n");
      scanf("%d",&per);
 
      if(per>=90)
      printf("The grade is A \n ");
  else if(per>=80 && per<90)
        printf("The grade is B \n ");
  else if(per>=70&& per<80)
        printf("The grade is C \n ");
  else if(per>=60 && per<70)
        printf("The grade is D \n ");
  else
       printf("FAIL \n ");
	



return EXIT_SUCCESS;
}

