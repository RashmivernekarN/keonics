
/*prg to  convert uppercase to lowercase
 using function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
   char str1[20];
   clrscr();
   printf("\n Enter any string");
   gets(str1);
   strlwr(str1);
   printf("\n Lower case string is %s",str1);
   strupr(str1);
   printf("\n Upper case string is %s",str1);
   getch();
 }