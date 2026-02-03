#include <stdio.h>
int count(int n)
{
  if(n==0)
  return 0;
  return 1+count(n/10);
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  if(n==0)
  {
    printf("Total digits=1");
    return 0;
  }
  if(n<0)
  n=-n;
  printf("Total digits=%d",count(n));
  return 0;
}