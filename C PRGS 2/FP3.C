  /*prg to find biggest of 3 numbers using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  int big(int,int,int);
  void main()
    {
      int a,b,c,lar;
      clrscr();
      printf("\n Enter any 3 nums");
      scanf("%d%d%d",&a,&b,&c);
      lar=big(a,b,c);
      printf("\n Biggest of 3 nums=%d",lar);
      getch();
    }
    int big(int x,int y,int z)
      {
       if(x>y)
	if(x>z)
	    return(x);
	else
	    return(z);
       else if(y>z)
	   return(y);
	 else
	   return(z);

      }