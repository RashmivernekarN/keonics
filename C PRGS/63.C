/*prg to print 1 to 50 nums whcih are divisible by 5 using for loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i;
     clrscr();

     for(i=1;i<=50;i++)
       {
	   if(i%5==0)
	    {
	    printf("\n %d",i);
	    }
       }
       getch();
   }
