/*prg to find sum of 1 to N even and odd nums  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n,sume=0,sumo=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);

     while(i<=n)
      {
       if(i%2==0)
	  { sume=sume+i;}
       else
	   { sumo=sumo+i;}
       i++;
      }
       printf("\n sum of 1 to n even nums=%d",sume);
       printf("\n sum of 1 to n odd nums=%d",sumo);
     getch();
  }
