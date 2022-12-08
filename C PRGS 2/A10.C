/*prg to read a matrix of order 3X3 and print the transpose
 of a given matrix*/

 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3];
     clrscr();
     printf("\n Enter the array elements\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
     printf("\n Transpose of a given matrix\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  printf("%3d",a[j][i]);
	 }
	 printf("\n");
       }

     getch();
   }

