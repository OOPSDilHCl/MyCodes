#include<stdio.h>
int main()
{
  int i,n,key,freq=0;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the number:");
  scanf("%d",&key);
  for(i=0;i<n;i++){
  if(key==a[i]) freq++;
  }
  printf("%d appeared %d times in the given array.",key,freq);
  return 0;
}