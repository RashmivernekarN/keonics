  /*prg to find area of a triangle using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  float area(float,float);
  void main()
    {
      float ar,h,b;
      clrscr();
      printf("\n Enter b and h");
      scanf("%f%f",&h,&b);
      ar=area(h,b);
      printf("\n area of a traingle=%f",ar);
      getch();
    }
      float area(float x,float y)
      {
       float ar;
       ar=0.5*x*y;
       return(ar);
      }