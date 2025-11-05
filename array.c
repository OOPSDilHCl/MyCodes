#include <stdio.h>
int main()
{
  int i,n,a[20];
  printf("Enter no of elements");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Contents of Array are: ");
  for(i=0;i<20;i++)
    printf("%d\t",a[i]);
  return 0;
}