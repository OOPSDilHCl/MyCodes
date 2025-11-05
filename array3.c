#include <stdio.h>
int main()
{
  int max,min,n;
  printf("Enter number of array element");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(int i=0;i<n;i++)
  {
    max=a[i]>max?a[i]:max;
    min=a[i]<min?a[i]:min;
  }
  printf("Max %d \n Min %d",max,min);
  return 0;
}
