/*prg to demonstrate adderss of the variable*/
#include <stdio.h>
#include <conio.h>
void main()
{
int x=25,y;
y=&x;
clrscr();
printf ("\n x value=%d",x);
printf ("\n address of x=%d",y);
getch();
}