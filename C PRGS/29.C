/*prg to read a character and check whether it is a alphabet,digit
or a special character using ascii values */
#include<stdio.h>
#include<conio.h>
void main()
 {
   char ch;
   clrscr();
   printf("\n Enter any character");
   scanf("%c",&ch);
   if(ch>=65 && ch<=90||ch>=97 && ch<=122)
      printf("\n %c is a alphabet",ch);
   else if(ch>=48 && ch<=57)
      printf("\n %c is a digit",ch);
   else
      printf("\n %c is a special character",ch);

   getch();
 }