  /*prg to find sum of two numbers using sum functions*/
  #include<stdio.h>
  #include<conio.h>
  int sum(int,int);
  void main()
    {
      int a,b,s;
      clrscr();
      printf("\n Enter anyt two nums");
      scanf("%d%d",&a,&b);
      s=sum(a,b);
      printf("\n sum=%d",s);
      getch();
    }
    int sum(int x,int y)
      {
       int z;
       z=x+y;
       return(z);

      }