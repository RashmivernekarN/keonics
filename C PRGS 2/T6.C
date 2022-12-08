	  //prg to read 5 nums and print them using pointer varaible
	  #include<stdio.h>
	  #include<conio.h>
	  void main()
	  {
	  int a[5],i;
	  clrscr();
	  printf("\n enter 5 nos");
	  for(i=0;i<=4;i++)
	  {
	  scanf("%d",&a[i]);
	  }
	  printf("\n entered element");
	  for(i=0;i<=4;i++)
	  {
	  printf("\n %d\t%d\t%d\t%d",a[i],i[a],*(a+i),*(i+a));
	  }
	  getch();
	  }
