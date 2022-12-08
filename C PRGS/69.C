/*prg to print below format
* * *
* * *
* * *
*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int r,c;
     clrscr();
     printf("\n Printing format \n");
     for(r=1;r<=3;r++)
       {
	 for(c=1;c<=3;c++)
	   {
	     printf("\t *");
	   }
	   printf("\n");
       }
     getch();
 }