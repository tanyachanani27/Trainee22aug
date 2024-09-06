/*Write a program to find the second largest element in an array.*/



#include<stdio.h>
#include<stdlib.h>

int main()
{

 int arr[]={11,23,14,15,60,90,80};
 int size= sizeof(arr)/sizeof(int);

     int largest = arr[0];
    int secondLargest =arr[1];

    for (int i = 2; i < size; i++)
	{
        if (arr[i] > largest)
		{
            secondLargest = largest;
            largest = arr[i];
        }
		else if (arr[i] > secondLargest && arr[i] < largest)
		{
            secondLargest = arr[i];
        }
    }	
printf("The second largest element is %d\n", secondLargest);


return EXIT_SUCCESS;
}

