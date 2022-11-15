class grandfather
{
       int age;
     void getdata(int x)
       {
              age=x;
        }
   void putdata()
     {
           System.out.println("AGE="+age);
      }
}
class father extends grandfather
{
    int sal;
     void accept(int y)
      {
          sal=y;
       }
 void display()
     {
           System.out.println("SALARY="+sal);
      }
}
   class son extends father
{
    int roll_no;
     void input(int z)
      {
         roll_no=z;
       }
 void output()
     {
           System.out.println("ROLL NO="+roll_no);
      }
}
 class multilevel
{
    public static void main(String args[])
        {
               son s=new son();
                s.getdata(30);        
                s.accept(9000);
                s.input(10);
                 s.putdata();
                 s.display();
                  s.output();
           }
  }   