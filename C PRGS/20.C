/*prg to check whether given no is even or odd using conditional operator */
#include<stdio.h>
#include<conio.h>
void main()
 {
   int n;
   clrscr();
   printf("\n Enter any num");
   scanf("%d",&n);
   (n%2==0)? printf("\n %d is even",n):printf("\n %d is odd",n);
   getch();
 }