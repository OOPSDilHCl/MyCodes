#include <stdio.h>
int main()
{
  int i,n,lprime=1;
  printf("Enter a number: \n");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    while(n%i==0)
    {
      lprime=i;
      n/=i;
    }
  } 
  printf("%d",lprime);
  return 0;
}