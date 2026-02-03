//1+x/1+x²/2!+x³/3!+...+x^n/n!.
#include <stdio.h>
int main()
{
  int x,n,t=1;
  double fact=1,sum=1;
  printf("Enter the value of x and n number of terms to be added :");
  scanf("%d%d",&x,&n);
  for(int i=1;i<=n;i++)
  {
    t*=x;
    fact*=i;
    sum+=t/fact;
  }
  printf("The sum of series = %lf.",sum);
  return 0;
}