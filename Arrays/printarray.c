/*Write a program to read and print array elements( using index and using address)*/

#include<stdio.h>
#define MAX 5
int main()
{
int i;
 int a[MAX];
 printf("ENTER THE ARRAY ELEMENTS : \n");
 printf("using index:");
 for(i=0;i<MAX ;i++)
 {
    scanf("%d",&a[i]);

}
 for(i=0;i<MAX ;i++)
 {
    printf("%d\t",a[i]);

}
printf("\n");



printf("using address:\n");
for(i=0;i<MAX;i++)
 {
  printf("%d\t",*(a+1));
}
return 0;
}
