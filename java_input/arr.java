//program to accept single dimensional array elements and
//find there sum
import java.util.Scanner;

public class arr {

   public static void main(String[] args) {
      Scanner s = new Scanner ( System.in);
      int a[ ]=new int[10];
      int sum=0;
      System.out.print("Enter value for n: ");
      int n=s.nextInt();
      System.out.print("Enter array elements ");
      for(int i=0;i<n;i++)
      {
         a[i]=s.nextInt();
         sum=sum+a[i];
      }
      for(int i=0;i<n;i++)
      {
         System.out.println("\n"+a[i]+"\n" );
      }
       System.out.println("\nsum of array elements= "+sum);
   }
} 