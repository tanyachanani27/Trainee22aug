/* SUM OF TWO NUMBERS */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=3;
	int b=9;
    int ret_val;

//demonstration of printf
  ret_val=printf("The sum of %d and %d is %d \n",a,b,a+b);
  printf("The number of characters printed is %d \n ",ret_val);

if(ret_val<0)
{
    printf("error occured");
	return EXIT_FAILURE;
	}
printf("Success");
return EXIT_SUCCESS;
}

