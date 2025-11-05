#include <stdio.h>
int main()
{
  int i,n,arr[n],sum=0;/*arr is alloted garbage value thus size of array could be very big*/
  printf("Enter number of array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("%d",sum);
  return 0;
}