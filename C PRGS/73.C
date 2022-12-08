/*
 *
 * *
 * * *
 * * * *
*/
#include<stdio.h>
  #include<conio.h>
  void main()
  {
    int r,c;
    clrscr();
    for(r=1;r<=4;r++)
     {
      for(c=1;c<=r;c++)
       {
	 printf("\t *");
       }
       printf("\n");
     }
     getch();
   }