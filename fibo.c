#include <stdio.h>
int main()
{
  int fibo1=0,fibo2=1,n;
  printf("Enter the number of fibonacci numbers you want: ");
  scanf("%d",&n);
  printf("Fibonacci series upto %d terms is: ",n);
  for(int i=1;i<=n;i++)
  { 
    printf("%d ",fibo1);
    int temp=fibo1;
    fibo1=fibo1+fibo2;
    fibo2=temp;
  }
  return 0;
}