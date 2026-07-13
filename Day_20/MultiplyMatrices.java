import java.util.*;
public class MultiplyMatrices
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter the rows and columns of matrix: ");
    int r1=scan.nextInt();
    int c1=scan.nextInt();
    System.out.println("Enter elements of the matrix: ");
    int pre[][]=new int[r1][c1];
    for(int i=0;i<r1;i++)
     for(int j=0;j<c1;j++)
      pre[i][j]=scan.nextInt();
    System.out.println("Enter the rows and columns of second matrix: ");
    int r2=scan.nextInt();
    int c2=scan.nextInt();
    System.out.println("Enter elements of the matrix: ");
    int[] post[]=new int[r2][c2];
    for(int i=0;i<r2;i++)
     for(int j=0;j<c2;j++)
      post[i][j]=scan.nextInt();
    if(c1!=r2){
    System.out.println("Multiplication not possible!");
    return;
    }
    int[][] pro=new int[r1][c2];
    for(int i=0;i<r1;i++){
     for(int j=0;j<c2;j++){
      for(int k=0;k<r2;k++){
       pro[i][j]+=pre[i][k]*post[k][j];
      }
     }
    }
    for(int i=0;i<r1;i++){
     for(int j=0;j<c2;j++){
      System.out.print(pro[i][j]+" ");
     }
     System.out.println();
    }
    scan.close();
  }
}