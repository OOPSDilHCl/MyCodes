import java.util.Scanner;
public class VotingEligibility{
  public static void main(String args[]){
    Scanner input=new Scanner(System.in);
    System.out.println("Enter your age please→");
    int n=input.nextInt();
    if(n<18) System.out.println("Not eligible!");
    else System.out.println("You are eligible to vote.");
    input.close();
  }
}