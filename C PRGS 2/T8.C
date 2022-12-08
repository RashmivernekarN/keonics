   /*prg to demonstrate address of the variables*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int x=25,y;
      y=&x;
      clrscr();

      printf("\n x value=%d",x);
      printf("\n Address of x=%d",y);
      printf("\n Address of y=%d",&y);
      getch();


    }