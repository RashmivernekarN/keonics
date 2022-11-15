//illustrate scanner class
import java.util.Scanner;

public class AverageMarks {

   public static void main(String[] args) {
      Scanner s = new Scanner ( System.in);
      System.out.print("Enter your name: ");
      String name=s.next();
      System.out.print("Enter marks in three subjects: ");
      int marks1=s.nextInt();
      int marks2=s.nextInt();
      int marks3=s.nextInt();
      double average = ( marks1+marks2+marks3)/3.0;
      System.out.println("\nName: "+name);
      System.out.println("Average: "+average);
   }
} 