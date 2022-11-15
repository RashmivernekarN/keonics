//program to find sum of 2 matrices
class matrix
{
   public static void main(String args[])
      {
        int a[][]={{10,20},{30,40}};
        int b[][]={{10,20},{30,40}};
        int s[][]=new int[2][2]; 
        System.out.println("array A");    
        for(int i=0;i<2;i++) 
          {
               for(int j=0;j<2;j++)
                {
                  System.out.print(a[i][j]+"\t");
                 }
                            System.out.println();  
         }  
           System.out.println("array B");    
        for(int i=0;i<2;i++) 
          {
               for(int j=0;j<2;j++)
                {
                  System.out.print(b[i][j]+"\t");
                 }
                            System.out.println();  
         }  
	         System.out.println("sum of elements of the matrix\n");
         for(int i=0;i<2;i++) 
               for(int j=0;j<2;j++)
                 s[i][j]=a[i][j]+b[i][j]; 
          for(int i=0;i<2;i++) 
          {
               for(int j=0;j<2;j++)
			          {
                  System.out.print(s[i][j]+"\t");
                 }
                            System.out.println();  
         }
}
}