  /*prg to find area of a circle using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  float area(float);
  void main()
    {
      float ar,r;
      clrscr();
      printf("\n Enter radius");
      scanf("%f",&r);
      ar=area(r);
      printf("\n area of a circle=%f",ar);
      getch();
    }
      float area(float x)
      {
       float ar;
       ar=3.142*x*x;
       return(ar);
      }