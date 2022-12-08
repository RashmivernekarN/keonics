/*prg to check whether given no is even or odd using  if-else */
#include<stdio.h>
#include<conio.h>
void main()
 {
   int n;
   clrscr();
   printf("\n Enter any num");
   scanf("%d",&n);
   if(n%2==0)
     printf("\n %d is a even no",n);
   else
     printf("\n %d is a odd no",n);

   getch();
 }