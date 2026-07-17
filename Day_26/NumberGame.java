import java.util.Scanner;
import java.util.Random;
public class NumberGame{
  public static void main(String args[]){
    int n,c=0;
    Scanner input=new Scanner(System.in);
    Random rand=new Random();
    int number=rand.nextInt(100)+1;
    System.out.println("Guess the number between 1 to 100");
    do
    {
    n=input.nextInt();
    c++;
    if(number>n) System.out.println("Too low");
    else if(number<n) System.out.println("Too high");
    }while(number!=n);
    System.out.println("You have guessed correctly. Attempts = "+c);
    input.close();
  }
}