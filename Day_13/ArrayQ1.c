#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Contents of Array are: ");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  return 0;
}