/*prg to find the biggest of 3 nums using nested if*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c;
   clrscr();
   printf("\n Enter 3 num");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
     if(a>c)
	 printf("\n %d is big",a);
     else
	 printf("\n %d is  big",c);
   else if(b>c)
	 printf("\n %d is  big",b);
     else
	 printf("\n %d is  big",c);

   getch();
 }