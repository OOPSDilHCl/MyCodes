#include <stdio.h>
int main()
{
  int n=4,k=1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      printf("%d²",k);
      k++;
    }
    
    printf("\n");
  }
  return 0;
}