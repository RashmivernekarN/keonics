  /*prg to find biggest of two numbers using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  int big(int,int);
  void main()
    {
      int a,b,lar;
      clrscr();
      printf("\n Enter any two nums");
      scanf("%d%d",&a,&b);
      lar=big(a,b);
      printf("\n Biggest of two nums=%d",lar);
      getch();
    }
    int big(int x,int y)
      {
       if(x>y)
       return(x);
       else
	return(y);

      }