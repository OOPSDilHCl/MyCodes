#include<stdio.h>
int main()
{
  int i,n,key;
  printf("Enter no of elements:\n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the key to be found:");
  scanf("%d",&key);
  for(i=0;i<n;i++){
  if(key==a[i]){
  printf("Number found at index: %d",i);
  return 0;
    }
  }
  printf("Number not found!");
  return 0;
}