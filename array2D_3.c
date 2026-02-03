//Transpose of a m×n matrix.
#include <stdio.h>
int main()
{
int n,m,i,j;
printf("Enter the order of the matrix: ");
scanf("%d %d",&m,&n);
int arr[m][n],trp[n][m];
printf("Enter the elements of array: ");
for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      trp[j][i]=arr[i][j];
    }
  }
for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    printf("%d\t",trp[i][j]);
    printf("\n");
  }
  return 0;
}