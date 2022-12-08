
/*prg to find area of a circle*/
#include<stdio.h>
#include<conio.h>
#define pi 3.142
void main()
{
float area,r;
clrscr();
printf("\n enter radius");
scanf("%f",&r);
area=3.142*r*r;
printf("\n area of a circle=%f",area);
getch();
}