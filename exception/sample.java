// illustrate exception handling       
class sample {
   public static void main(String args[]) {
     int num1,num2,num3,result;
     num1 = 10;
      num2 = 5;
      num3 =5;
     try { 
        // Try block to handle code that may cause exception
        result=(num1/(num3-num2));
        //System.out.println("Try block message");
          
     } catch (ArithmeticException e) { 
            // This block is to catch divide-by-zero error
            System.out.println("divide-by-zero error");
       }
        result=num1/(num2+num3);
        System.out.println("result="+result);  
   }
}
