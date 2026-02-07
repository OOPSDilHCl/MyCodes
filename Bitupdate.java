import java.util.Scanner;
public class Bitupdate
{
  public static void main(String[] args)
  {
    int n,pos,bitMask,newNumber;
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number and position to change");
    n=sc.nextInt();
    pos=sc.nextInt();
    bitMask=1<<pos;
    System.out.println("Enter to either set:1 or clear:0.");
    int op=sc.nextInt();
    if(op==1) { newNumber=bitMask|n;
    System.out.println(newNumber);
    }
    else{ int newBitMask=~(bitMask);
      newNumber=newBitMask&n;
      System.out.println(newNumber);
    }
  }
}