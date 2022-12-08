 /*
 1
 1 2
 1 2 3
 1 2 3 4

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
	 printf("\t %d",c);
       }
       printf("\n");
     }
     getch();
   }