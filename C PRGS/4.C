
/*prg to demonstrate sizeof operator */
#include<stdio.h>
#include<conio.h>
void main()

 {
   clrscr();
   printf("\n size of integer=%d bytes",sizeof(int));
   printf("\n size of float=%d",sizeof(float));
   printf("\n size of character=%d",sizeof(char));
   printf("\n size of double=%d",sizeof(double));
   printf("\n size of signed=%d",sizeof(signed));
   printf("\n size of unsigned=%d",sizeof(unsigned));
   printf("\n size of short=%d",sizeof(short));
   printf("\n size of long=%d",sizeof(long));
   getch();
 }