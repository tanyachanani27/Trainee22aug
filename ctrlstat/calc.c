/*9. Write a C program that simulates a simple calculator using a switch statement. The user should input two numbers and an operator (+, -, *, /) and the program should print the result.*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1,n2;
printf("Enter 2 integers :\n");
scanf("%d%d",&n1,&n2);
 char op;
 printf("Enter a operstor among(+,-,*,/):\n");
scanf(" ");
scanf("%c",&op);

 switch(op)
 {
 case'+': printf("The sum of %d and %d is %d",n1,n2,n1+n2);
 		break;
case '-': printf("The subtraction of %d and %d is %d",n1,n2,n1-n2);
break;
case '*': printf("The product of %d and %d is %d",n1,n2,n1*n2);
break;
case '/': printf("The remainder  of %d and %d is %d",n1,n2,n1/n2);
break;
default : printf("Invalid choice \n");
break;
}

return EXIT_SUCCESS;
}

