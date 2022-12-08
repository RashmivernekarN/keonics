/*prg to read a character and check whether it is a alphabet,digit
or a special character using built in function values */
#include<stdio.h>

#include<conio.h>
void main()
 {
   char ch;
   clrscr();
   printf("\n Enter any character");
   scanf("%c",&ch);
   if(isalpha(ch))
      printf("\n %c is a alphabet",ch);
   else if(isdigit(ch))
      printf("\n %c is a digit",ch);
   else
      printf("\n %c is a special character",ch);
   getch();
 }