/*print and read 2d array*/

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

return EXIT_SUCCESS;
}

