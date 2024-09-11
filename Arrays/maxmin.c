/* Write a program to find the maximum and minimum elements in an array of integers.*/

#include<stdio.h>

int main()
{
int i;
 int n;
printf("ENTER THe number of elements in array : \n");
scanf("%d",&n);
int a[n];
 printf("ENTER THE ARRAY ELEMENTS : \n");
 for(i=0;i<n ;i++)
 {
    scanf("%d",&a[i]);

}
 for(i=0;i<n ;i++)
 {
    printf("%d\t",a[i]);

}
int max=a[0];
   for(i=0;i<n;i++)
   {
     if(max<a[i])

	 {
	  max=a[i];
	}

	}
	printf(" THE MAX ELEMENT OF THE ARRAY IS %d\n",max);


 int min=a[0];
  for(i=0;i<n;i++)
     {
      if(min>a[i])
 
      {
        min=a[i];
      }
 
     }
      printf(" THE MIN ELEMENT OF THE ARRAY IS %d\n",min);

return 0;
}
