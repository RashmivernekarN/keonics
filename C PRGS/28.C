/*prg to read a character and check whether it is a alphabet,digit
or a special character using if-else-if */
#include<stdio.h>
#include<conio.h>
void main()
 {
   char ch;
   clrscr();
   printf("\n Enter any character");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
      printf("\n %c is a alphabet",ch);
   else if(ch>='0'&& ch<='9')
      printf("\n %c is a digit",ch);
   else
      printf("\n %c is a special character",ch);

   getch();
 }