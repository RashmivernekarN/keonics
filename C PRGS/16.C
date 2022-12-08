/*prg to find area of a circle */
#include<stdio.h>
#include<conio.h>
float pi=3.142;
void main()
 {
   float area,r;
   clrscr();
   printf("\n Enter radius");
   scanf("%f",&r);
   area=pi*r*r;
   printf("\n Area of a circle=%f",area);
   getch();
 }