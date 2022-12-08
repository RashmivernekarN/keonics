
/*prg to find biggest of two nums using conditional operator */
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,res;
   clrscr();
   printf("\n Enter two nums");
   scanf("%d%d",&a,&b);
   res=(a>b)? a:b;
   printf("\n %d is big",res);
   getch();
 }