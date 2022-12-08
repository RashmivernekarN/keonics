/*prg to read a string and reverse the string
using function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {

   char str[20];
   clrscr();
   printf("\n Enter any string");
   gets(str);
   printf("\n Entered string is :%s",str);
   strrev(str);
   printf("\n Reversed string is :%s",str);

   getch();
 }



