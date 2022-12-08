/*prg to find area of a traingle,rectangle and circle
using switch*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   float area,b,h,l,r,pi=3.142;
   int n;
   clrscr();
   printf("\n 1-->Area of a  traingle");
   printf("\n 2-->Area of a  rectangle");
   printf("\n 3-->Area of a  circle");
   printf("\n Enter your choice");
   scanf("%d",&n);
   switch(n)
   {
   case 1:
      printf("\n Enter base and height");
      scanf("%f%f",&b,&h);
      area=0.5*b*h;
      printf("\n Area of a traingle=%f",area);
      break;
   case 2:
      printf("\n Enter length and breadth");
      scanf("%f%f",&l,&b);
      area=l*b;
      printf("\n Area of a rectangle=%f",area);
      break;
   case 3:
      printf("\n Enter radius");
      scanf("%f",&r);
      area=pi*r*r;
      printf("\n Area of a circle=%f",area);
      break;
   default:
      printf("\n Invalid choice");
   }
   getch();
 }
