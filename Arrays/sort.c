/*3. Write a program to sort an array of integers in ascending order.*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
 int a[]={22,3,98,55,40,30,10,0};
 int size = sizeof(a)/sizeof(int);
 for(int i=0;i<size-1;i++)
 {
 for(int j=0;j<size-1-i;j++)
 {
 if(a[j]>a[j+1])
  {
   int temp=a[j+1];
   a[j+1]=a[j];
   a[j]=temp;
   }
   }
}  
printf("{");

for(int i=0;i<size;i++)
{
printf("%d\t",a[i]);

}
printf("}");



return EXIT_SUCCESS;
}

