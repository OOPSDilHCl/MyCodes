#include <stdio.h>
int main()
{
  int i,n,a[n],b[n],c[n],sum=0;
  printf("Enter number of array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter element of a:");
    scanf("%d",&a[i]);
    printf("Enter element of b:");
    scanf("%d",&b[i]);
    c[i]=a[i]+b[i];
  }
  for(i=0;i<n;i++)
  {
    printf("%d\t",c[i]);
  }
  return 0;
}