#include <stdio.h>
int main()
{
  int max,min,n,max2;
  printf("Enter number of array element");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  max=a[0];
  max2=a[0];
  min=a[0];
  for(int i=0;i<n;i++)
  {
    max=a[i]>max?a[i]:max;
    min=a[i]<min?a[i]:min;
  }
  for(int i=0;i<n;i++)
  {
    if((a[i]<max)&&(a[i]>max2))
    {
    max2=a[i];
    }
  }
  printf("Maximum value→%d\nMinimmum value→%d\nSecond largest value→%d",max,min,max2);
  return 0;
}