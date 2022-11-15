import java.util.Scanner;

 class grandfather
{  
   
        Scanner s=new Scanner(System.in);
        String name=new String();
         int age;
    public void getdata()
      {
         System.out.println("Enter name");
        name=s.next();
          System.out.println("Enter age");
         age=s.nextInt();
       } 
      }
  class father extends grandfather
{  
     Scanner s1=new Scanner(System.in);
     String job=new String();
     int sal;
    public void getdata1()
      {
         System.out.println("Enter job");
         job=s1.next();
          System.out.println("Enter sal");
       sal=s1.nextInt();
       } 
      
}
 class son extends father
{  
     Scanner s2=new Scanner(System.in);
      String hobby=new String();
    public void getdata2()
      {
              getdata();
               getdata1();
         System.out.println("Enter hobby");
                 hobby=s2.next();
       } 
        void putdata2()
      {
          System.out.println("\n\nname="+name);
         System.out.println("\n\nage="+age);
         System.out.println("\n\njob="+job);
           System.out.println("\n\nsal="+sal);
         System.out.println("\n\nhobby="+hobby);
   }
}
    class multilevel
{
public static void main(String args[])
{
     son x=new son();
       x.getdata2();
      x.putdata2();
}
}
    


