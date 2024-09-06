/*. Write a program to count the occurrences of each element in an array.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 1, 3, 2, 1};
    int sizea = sizeof(a) / sizeof(int);
 int i,count;
    for( i = 0; i < sizea; i++)
    {
        count = 0;  // Reset count for each element
        for(int j = 0; j < sizea; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        // Print the count for the current element
      printf("The count of %d is %d\n", a[i], count);
    }
// printf("The count of %d is %d\n", a[i], count);
    return EXIT_SUCCESS;
}

