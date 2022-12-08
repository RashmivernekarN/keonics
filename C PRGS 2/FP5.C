  /*prg to find area of a rectangle using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  float area(float,float);
  void main()
    {
      float ar,l,b;
      clrscr();
      printf("\n Enter l and b");
      scanf("%f%f",&l,&b);
      ar=area(l,b);
      printf("\n area of a rect=%f",ar);
      getch();
    }
      float area(float x,float y)
      {
       float ar;
       ar=x*y;
       return(ar);
      }