import java.util.*;
public class Transpose
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter the rows and columns of matrix: ");
    int m=scan.nextInt();
    int n=scan.nextInt();
    System.out.println("Enter elements of the matrix: ");
    int[] mat[]=new int[m][n];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      mat[i][j]=scan.nextInt();
    int trp[][]=new int[n][m];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      trp[j][i]=mat[i][j];
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      System.out.print(trp[i][j]+" ");
     }
     System.out.println();
    }
    scan.close();
  }
}