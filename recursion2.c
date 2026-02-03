#include <stdio.h>
int reverse(int n,int rev)
{
  if(n==0)
  return rev;
  return reverse(n/10,rev*10+n%10);
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Reverse number=%d\n",reverse(n,0));
  if(reverse(n,0)==n)
  {
    printf("Palindrome number.");
  }
  else
  {
    printf("Not a palindrome number.");
  }
  return 0;
}