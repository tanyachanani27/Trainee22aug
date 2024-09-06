/*WAP to get the position of a substring in a string*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 100
int main()
{

  char str[MAX], sub[MAX];
   char *pos;
  puts("Enter a string:\n");
  printf("Enter the main string: ");
    fgets(str, MAX, stdin);
int	len;
len==strlen(str);
  if(str[len-1]=='\n')
  {
   str[len-1]='\0';
   len--;

   }

  printf("Enter the substring to find: ");
    fgets(sub,MAX, stdin);
  len=strlen(sub);
    if(sub[len-1]=='\n')
    {
     sub[len-1]='\0';
     len--;
 
     }
   
   pos = strstr(str, sub);

   if (pos != NULL) 
   {
        int position = pos - str;
        printf("The substring is found at position %d.\n", position);
    } else {
        printf("The substring is not found.\n");
    }


return EXIT_SUCCESS;
}

