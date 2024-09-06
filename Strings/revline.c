/*WAP to reverse the given line*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
int main()
{
   char line[MAX];
    printf("Enter the main line: ");
    fgets(line, sizeof(line), stdin);


 int len=strlen(line);
// if(line[len-1]=='\n')
    // line[len-1]='\0';


 int end=len-1;
 int start;
 char temp;

 while(start<end)
 {
  temp=line[start];
  line[start]=line[end];
  line[end]=temp;
  start=start+1;
  end = end-1;

  }
 puts("The reverse line is:");
 puts(line);
return EXIT_SUCCESS;
}

