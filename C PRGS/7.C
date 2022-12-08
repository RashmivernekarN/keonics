/*prg to swap two nums withot using dummy varaible*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b;
   clrscr();
   printf("\n Enter two nums");
   scanf("%d%d",&a,&b);
   printf("\n Before swapping a=%d \t b=%d",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n After swapping a=%d \t b=%d",a,b);
   getch();
 }