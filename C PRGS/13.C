/*prg to find area of a traingle*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   float area,b,h;
   clrscr();
   printf("\n Enter base and height");
   scanf("%f%f",&b,&h);
   area=0.5*b*h;
   printf("\n Area of a traingle=%f",area);
   getch();
 }