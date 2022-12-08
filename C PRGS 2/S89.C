/*prg to demonstrate pointer variable*/
#include <stdio.h>
#include <conio.h>
void main()
{
int x,*P,*p2;
clrscr();
x=25;
p=&x;
p2=&p;
printf ("\n x value=%d",x);
printf ("\n address of x=%d",p);
printf ("\n address of p=%d",p2);
getch();
}