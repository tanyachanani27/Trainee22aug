/*Write a program to find the transpose of a given 2D array (matrix).*/

#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
int main()
{
  int ch[ROW][COL]	;
  printf("ENTER THE ARRAY ELEMENTS :");
  for(int i=0;i<ROW;i++)
  {
   for(int j=0;j<COL;j++)
   {
    scanf("%d",&ch[i][j]);
	}
}
printf(" THE ARRAY ELEMENTS ARE \n :");

for(int i=0;i<ROW;i++)
 {
     for(int j=0;j<COL;j++)
     {

      printf("%d\t",ch[i][j]);
      }
	  printf("\n");
  }

  printf("THE TRANSPOSE OF THE ABOVE ARRAY MATRIX IS : \n");

  for(int i=0;i<ROW;i++)
  {
   for(int j=0;j<COL;j++)
    {
	 printf("%d\t",ch[j][i]);
	 }
	 printf("\n");

	}

return EXIT_SUCCESS;
}

