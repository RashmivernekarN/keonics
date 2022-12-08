
/*prg to read a matrix of order 3X3 and find the sum of ODD &EVEN elements
 of a given matrix*/

 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3],sume=0,sumo=0;
     clrscr();
     printf("\n Enter the array elements\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }

     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  if(a[i][j]%2==0)
	   {
	    sume=sume+a[i][j];
	   }
	  else
	   {
	    sumo=sumo+a[i][j];
	   }
	 }

       }
   printf("\n sum of even elements=%d",sume);
   printf("\n sum of odd elements=%d",sumo);
     getch();
   }