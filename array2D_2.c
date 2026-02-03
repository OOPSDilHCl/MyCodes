#include <stdio.h>
int main()
{ 
  int m,n;
  printf("Enter the rows and columns of your matrix: ");
  scanf("%d\t%d",&m,&n);
  int a[m][n],b[m][n];
  int c[m][n];
  printf("Enter the elements of first array: ");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of second array: ");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("The sum of the two arrays: ");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%d\t",c[i][j]);
    }
  }
  return 0;
}