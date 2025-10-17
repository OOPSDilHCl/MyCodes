//lcm
#include <stdio.h>
int main()
{
  int a,b,lcm;
  printf("Enter any two numbers: ");
  scanf("%d%d",&a,&b);
  int max=a>b?a:b;
  for(int i=1; ;i++)
  {
    lcm=max*i;
    if(lcm%a==0 && lcm%b==0)
    {
    printf("LCM of the two numbers is %d",lcm);
    return 0;
    }
  }
  return 0;
}