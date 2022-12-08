/*prg to swap two nums using dummy varaible*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,temp;
   clrscr();
   printf("\n Enter two nums");
   scanf("%d%d",&a,&b);
   printf("\n Before swapping a=%d \t b=%d",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("\n After swapping a=%d \t b=%d",a,b);
   getch();
   }
