//program to perform arithmatic operation
import java.util.Scanner;

public class Arith1 {

   public static void main(String[] args) {
      Scanner s = new Scanner ( System.in);
      System.out.print("Enter value for a: ");
      int a=s.nextInt();
      System.out.print("Enter value for b: ");
      int b=s.nextInt();
      int sum=a+b;
      int diff=a-b;
      int p=a*b;
      int q=a/b;
      int r=a%b;      
      System.out.println("\na= "+a+"\nb= "+b);
      System.out.println("\nsum= "+sum+"\ndiff= "+diff+"\nproduct="+p+"\nque= "+q+"\nremainder= "+r);
   }
} 