/*prg to read a char and check whether it is a vowel or not using switch*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   char ch;
   clrscr();
   printf("\n Enter any character");
   scanf("%c",&ch);
   switch(ch)
   {
   case 'A':
   case 'a':
   case 'E':
   case 'e':
   case 'I':
   case 'i':
   case 'O':
   case 'o':
   case 'U':
   case 'u':
	    printf("\n %c is a vowel",ch);
	    break;
   default:
	    printf("\n %c is not a vowel",ch);
   }
   getch(); }