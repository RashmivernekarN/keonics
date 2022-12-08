

/*
 1 1 1
 2 2 2
 3 3 3
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
	 printf("\t %d",r);
       }
       printf("\n");
     }
     getch();
   }