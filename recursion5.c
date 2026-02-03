#include <stdio.h> 
/*Greatest common divisor.*/
int gcd(int a,int b,int hcf)
{
  if(hcf==0)
  return 1;
  if(a%hcf==0 && b%hcf==0)
  return hcf;
  return gcd(a,b,hcf-1);
}
int main()
{
  int x,y;
  printf("Enter the two numbers:");
  scanf("%d%d",&x,&y);
  printf("HCF=%d",gcd(x,y,(x<y)?x:y));
  return 0;
}