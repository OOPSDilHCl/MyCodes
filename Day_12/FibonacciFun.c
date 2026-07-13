#include <stdio.h>
#include <stdbool.h>
void fibo(int a)
{
  int fibo1=0,fibo2=1;
  for(int i=1;i<=a;i++)
  { 
    printf("%d ",fibo1);
    int temp=fibo1;
    fibo1=fibo1+fibo2;
    fibo2=temp;
  }
}
int main()
{
 int n;
 printf("Enter the range: ");
 scanf("%d",&n);
 fibo(n);
 return 0;
}