//Binary to Decimal
#include <stdio.h>
int main()
{
  int n,p=1,dec=0;
  printf("Enter a binary number: ");
  scanf("%d",&n);
  int t=n;
  while(t>0)
  {
    dec+=t%10*p;
    p*=2;
    t/=10;
  }
  printf("%d",dec);
  return 0;
}