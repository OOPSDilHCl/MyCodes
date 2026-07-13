#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int a)
{
  if(a<0) return false;
  int temp=a,rev=0;
  while(temp>0)
  {
   rev=rev*10+temp%10;
   temp/=10;
  }
  return rev==a;
}
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 if(isPalindrome(n))
 printf("%d is a palindrome number.",n);
 else
 printf("%d is not a palindrome number.",n);
 return 0;
}