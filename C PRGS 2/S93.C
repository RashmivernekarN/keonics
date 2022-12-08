/*prg to demonstrate pointer variable*/
#include <stdio.h>
#include <conio.h>
void main()
{
float *p;
clrscr();
p=0*1000;
printf ("\n %x",p);
printf ("\n %x",p+1);
printf ("\n %x",p+2);
getch();
}