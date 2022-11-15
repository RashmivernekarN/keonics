class Example1 {
   public static void main(String args[]) {
     int num1, num2;
     try { 
        // Try block to handle code that may cause exception
        num1 = 0;
        num2 = 62 / num1;
        System.out.println("Try block message");
     } catch (ArithmeticException e) { 
            // This block is to catch divide-by-zero error
            System.out.println("Error: Don't divide a number by zero");
       }
     System.out.println("I'm out of try-catch block in Java.");
   }
}
