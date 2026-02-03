import java.util.Scanner;
public class hello 
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    String name=sc.next();//Only first token is taken.
    String full_name=sc.nextLine();//complete sentence is taken.
    System.out.print("Hello World.\n");
    System.out.println("Hi, I am Shubh.");
    System.out.print("Korewa Java code desu");
    System.out.println(name+"\n"+full_name);
  }
}