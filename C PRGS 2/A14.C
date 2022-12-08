
/*prg to read a matrix of order 3X3 and find the sum of secondary diagonal
 elements of a given matrix*/

 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3],sum=0;
     clrscr();
     printf("\n Enter the array elements\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }

     for(i=0,j=2;i<3;i++,j--)
       {
	    sum=sum+a[i][j];



       }
   printf("\n sum of primary diagonal elements=%d",sum);

     getch();
   }