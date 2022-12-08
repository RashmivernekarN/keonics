/*prg to demonstrate pointer variable*/
#include <stdio.h>
#include <conio.h>
void main()
{
int x,y,z,*p1,*p2,*p3;
clrscr();
p1=&x;
p2=&y;
p3=&z;
*p1=10;
*p2=20;
*p3=(*p1)+(*p2);
printf ("\n sum=%d",*p3);
getch();
}