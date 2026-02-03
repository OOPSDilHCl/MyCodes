#include <stdio.h>
int max(int a[],int i,int maxm)
{
  if(i==0)
  return maxm;
  if(maxm<a[i-1])
  return max(a,i-1,a[i-1]);
  else
  return max(a,i-1,maxm);
}
int main()
{
  int n;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  int arr[n];
  for(int j=0;j<n;j++)
  {
    scanf("%d",&arr[j]);
  }
  printf("Greatest element=%d",max(arr,n,arr[0]));
  return 0;
}