  /*prg to find the factorial of a given no using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  int fact(int);
  void main()
    {
      int f,n;
      clrscr();
      printf("\n Enter any no");
      scanf("%d",&n);
      f=fact(n);
      printf("\n Factorial of a given no=%d",f);
      getch();
    }
      int fact(int x)
      {
       int f=1,i=1;
       while(i<=x)
	 {
	   f=f*i;
	   i++;
	 }
       return(f);
      }