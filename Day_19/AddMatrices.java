import java.util.*;
public class AddMatrices
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter the rows and columns of matrix: ");
    int m=scan.nextInt();
    int n=scan.nextInt();
    System.out.println("Enter elements of the first matrix: ");
    int[] mat1[]=new int[m][n];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      mat1[i][j]=scan.nextInt();
    System.out.println("Enter elements of the second matrix: ");
    int[][] mat2=new int[m][n];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      mat2[i][j]=scan.nextInt();
    int sum[][]=new int[m][n];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      sum[i][j]=mat1[i][j]+mat2[i][j];
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
      System.out.print(sum[i][j]+" ");
     }
     System.out.println();
    }
    scan.close();
  }
}