//prg to read a matrix of order 3X3 and print same

 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3];
     clrscr();
     printf("\n Enter the  elements of the matrix \n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
     printf("\n Entered elements are \n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  printf("\t %d",a[i][j]);
	 }
	 printf("\n");
       }

     getch();
   }




