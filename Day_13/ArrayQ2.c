#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  printf("Sum = %d \nAverage = %lf",sum,(double)sum/n);
  return 0;
}