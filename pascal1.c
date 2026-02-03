#include <stdio.h>
int factorial(int x)
  {
    int factorial=1;
    for(int i=2;i<=x;i++)
    {
      factorial*=i;
    }
    return factorial;
  }
int combinations(int n,int r)
  {
    int ncr=factorial(n)/(factorial(n-r)*factorial(r));
    return ncr;
  }
int main()
  {
    int n;
    printf("Enter the size of pascal triangle: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      for(int j=1;j<=n-i+1;j++)
      {
        printf(" ");
      }
      for(int j=0;j<=i;j++)
      {
        printf("%d ",combinations(i,j));
      }
    printf("\n");
  }
  return 0;
}