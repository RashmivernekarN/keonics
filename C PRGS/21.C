/*prg to check whether given no is +ve or -ve no using conditional operator */
#include<stdio.h>
#include<conio.h>
void main()
 {
   int n;
   clrscr();
   printf("\n Enter any num");
   scanf("%d",&n);
   (n>0)? printf("\n %d is +ve no",n):printf("\n %d is -ve no",n);
   getch();
 }