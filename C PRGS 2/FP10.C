  /*prg to check given no is palindrome or not using sub functions*/
  #include<stdio.h>
  #include<conio.h>
  int rev(int);
  void main()
    {
      int r,n,temp;
      clrscr();
      printf("\n Enter any no");
      scanf("%d",&n);
      temp=n;
      r=rev(n);
      if(temp==r)
	 printf("\n Palindrome");
      else
	 printf("\n Not a Palindrome");


      getch();
    }
      int rev(int x)
      {
       int r=0,d;
       while(x>0)
	 {
	  d=x%10;
	  r=(r*10)+d;
	  x=x/10;
	 }
       return(r);
    }