#include <stdio.h>
int main()
{
  printf("Enter the size of triangle: ");
  int n,num;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  { 
    num=1;
    for(int j=1;j<=i;j++)
    {
      printf("%d",num);
      num++;
    }
    printf("\n");
  }
  return 0;
}