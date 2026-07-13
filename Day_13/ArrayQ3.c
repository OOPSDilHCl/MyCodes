#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int max=a[0],min=a[0];
  for(i=0;i<n;i++)
  {
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
  }
  printf("Largest value = %d \nSmallest value = %d",max,min);
  return 0;
}