#include<stdio.h>
int main()
{
  int i,n,even=0,odd=0;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0) even++;
    else odd++;
  }
  printf("Even count = %d \nOdd count = %d",even,odd);
  return 0;
}