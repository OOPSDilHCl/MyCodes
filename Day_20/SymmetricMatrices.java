import java.util.*;
public class SymmetricMatrices
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
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      if(mat1[i][j]!=mat2[i][j]){
        System.out.println("Not a symmetric matrices!");
        return;
      }
    System.out.println("Symmetric Matrices.");
    scan.close();
  }
}