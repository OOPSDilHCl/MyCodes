#include <stdio.h>
int power(int x,int n)
{
  if(n==1)
  return x;
  return x*power(x,n-1);
}
int main()
{
  int a,n;
  printf("Enter the number and power:");
  scanf("%d%d",&a,&n);
  printf("Final answer=%d",power(a,n));
  return 0;
}