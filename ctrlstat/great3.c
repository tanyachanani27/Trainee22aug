
/*2. program to find largest of three numbers*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c,result;
printf("enter the 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
 printf("%d is greatest of all \n",a);
else if(b>a && b>c)
 printf("%d is greatest of all \n",b);
else
 printf("%d is greatest of all \n",c);





return 0;
}

