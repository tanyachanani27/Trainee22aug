/*. WAP to reverse the given string* */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int main()
{
   char str[MAX];
    printf("Enter the main string: ");
    fgets(str, MAX, stdin);
int len;
len=strlen(str);

if(str[len-1]=='\n')
{
 str[len-1]='\0';
 len--;
 }

 int end=len-1;
 int start;
 char temp;
 while(start<end)
 {
  temp=str[start];
  str[start]=str[end];
  str[end]=temp;
  start=start+1;
  end = end-1;

  }
 puts("The reverse string is:");
 puts(str);
return EXIT_SUCCESS;
}

