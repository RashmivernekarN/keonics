//program to illustrate command line argument.

public class add {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i < args.length; i++) {
            sum = sum + Integer.parseInt(args[i]);
        }
System.out.println("The sum of the arguments passed is " + sum);
    }
}