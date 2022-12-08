/*
 1 2 3
 1 2 3
 1 2 3
*/
#include<stdio.h>
  #include<conio.h>
  void main()
  {
    int r,c;
    clrscr();
    for(r=1;r<=3;r++)
     {
      for(c=1;c<=3;c++)
       {
	 printf("\t %d",c);
       }
       printf("\n");
     }
     getch();
   }