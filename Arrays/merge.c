/*Write a program to merge two arrays into a single array.*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a[]={1,2,3};
 int b[]={4,5,6};

 int sizea= sizeof(a)/sizeof(int);
 int sizeb= sizeof(b)/sizeof(int);
 int sizeab= sizea+sizeb;

 int ab[sizeab];
  int j=0;
 for(int i=0;i<sizeab;i++)
 {
   if(i<sizea)
   {
     ab[i]=a[i];
	 }
	 else
	 {     if(j<sizeb)
	 {
			 ab[i]=b[j];
			 j=j+1;
	  }
	  }}
printf(" the elements of ab is:\n");
for(int i=0;i<sizeab;i++)
{
 printf("%d\t",ab[i]);
 }
printf("\n");

return EXIT_SUCCESS;
}

