#include <stdio.h>
int main()
{
int n,Lsum=0,Rsum=0,sum=0;
printf("Enter the order of square matrix: ");
scanf("%d",&n);
int a[n][n];
printf("Enter the elements of the array: ");
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
  scanf("%d",&a[i][j]);
  }
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
  if(i==j)
  Lsum+=a[i][j];
  if((i+j)==n-1)
  Rsum+=a[i][j];
  if((i==j)||(i+j==n-1))
  sum+=a[i][j];
  }
}
printf("%d\t%d\t%d",Lsum,Rsum,sum);
return 0;
}