 /*prg to read TWO matrix of order MXN and find the sum,subtraction of
  both the matirx */

 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int m,n,i,j,a[10][10],b[10][10],sum[10][10],sub[10][10];
     clrscr();
     printf("\nEnter row size and col size");
     scanf("%d%d",&m,&n);
     printf("\n Enter the array elements for matrix A\n");
     for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
     printf("\n Enter the array elements for matrix B\n");
     for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  scanf("%d",&b[i][j]);
	 }
       }
   /*sum of two matrix*/
     for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  sum[i][j]=a[i][j]+b[i][j];
	 }
       }
     /*subtraction */
       for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  sub[i][j]=a[i][j]-b[i][j];
	 }
       }



   printf("\n sum of both matrix\n");
     for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  printf("\t%3d",sum[i][j]);
	 }
	 printf("\n");
       }

   printf("\n subtraction of both matrix\n");
     for(i=0;i<m;i++)
       {
       for(j=0;j<n;j++)
	 {
	  printf("\t%3d",sub[i][j]);
	 }
	 printf("\n");
       }
     getch();
   }