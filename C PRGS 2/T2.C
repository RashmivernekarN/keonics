  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int x,*p,**p2;
  clrscr();
  x=25;
  p=&x;
  p2=&p;
  printf("\n x value=%d",x);
  printf("\n p value=%d",p);
  printf("\n p2 value=%d",p2);
  printf("\n *p value=%d",*p);
  printf("\n *p2 value=%d",*p2);
  printf("\n **p2 value=%d",**p2);
  getch();
  }






