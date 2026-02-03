#include <stdio.h>
int main()
{
  int n,arr[32],t,i=0;
  printf("Enter the decimal number");
  scanf("%d",&n);
  if(n==0)
  {
    printf("0\n");
    return 0;
  }
  t=n;
  while(t>0)
  {
    arr[i]=t%2;
    i++;
    t/=2;
  }
  int brr[i];
  for(int j=0;j<=i-1;j++)
  {
    brr[j]=arr[i-1-j];
    printf("%d",brr[j]);
  }
  return 0;
}