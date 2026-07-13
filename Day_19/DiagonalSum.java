import java.util.*;
public class DiagonalSum
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
    int Lsum=0,Rsum=0,Sum=0;  
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
       if(i==j) Lsum+=mat[i][j];
       if(i+j==n-1) Rsum+=mat[i][j];
       if(i==j || i+j==n-1) Sum+=mat[i][j];
     }
    }
    System.out.println("(Principal diagonal)Left sum="+Lsum+" Right diagonal sum="+Rsum+" Diagonal sum="+Sum);
    scan.close();
  }
}