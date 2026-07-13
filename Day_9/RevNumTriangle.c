#include <stdio.h>
int main()
{
  int num,n;
  printf("Enter the size of pattern: ");
  scanf("%d",&n);
  for(int i=n;i>0;i--)
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