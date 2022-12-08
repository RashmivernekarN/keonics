  /*prg to find  simple int using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  float simple(float,float,float);
  void main()
    {
      float p,t,r,si;
      clrscr();
      printf("\n Enter P T R");
      scanf("%f%f%f",&p,&t,&r);
      si=simple(p,t,r);
      printf("\n simple interese=%f",si);
      getch();
    }
      float simple(float x,float y,float z)
      {
       float s;
       s=(x*y*z)/100;
       return(s);
      }