
/*8. Write a C program that reads a character from the user and checks whether it is a vowel (a, e, i, o, u) or a consonant using a switch statement.
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
 char vow;
 printf("Enter a alphabet :\n");
 scanf("%c",&vow);

 switch(vow)
 {
 case'a': printf("Its a vowel");
 		break;
case 'e': printf("Its a vowel");
break;
case 'i': printf("Its a vowel");
break;
case 'o': printf("Its a vowel");
break;
case 'u': printf("Its a vowel");
break;
case 'A': printf("Its a vowel\n");
break;
case 'E': printf("Its a vowel\n");
break;
case 'I': printf("Its a vowel\n");
break;
case 'O': printf("Its a vowel\n");
break;
case 'U': printf("Its a vowel \n");
break;
default : printf("its a consonant \n");
break;
}

return EXIT_SUCCESS;
}

