/*prg to find area of a rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
float area,b,l;
clrscr();
printf("\n enter length and breadth");
scanf("%f%f",&l,&b);
area=l*b;
printf("\n area of a rectangle=%f",area);
getch();
}