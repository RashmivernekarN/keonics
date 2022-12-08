/*
 1
 2 2
 3 3 3
 4 4 4 4

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
	 printf("\t %d",r);
       }
       printf("\n");
     }
     getch();
   }