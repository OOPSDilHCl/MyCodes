//To check for palindrome 
#include <stdio.h>
int main()
{
int n,num,rev=0;
printf("Enter any number");
scanf("%d",&n);
num = n;
while(num>0)
{
  rev=(rev*10)+(num%10);
  num=num/10;
}
printf("The reverse of %d is %d",n,rev);
if(n==rev)
printf("\nThe number is palindrome");
else
printf("\nNot a palindrome number");
return 0;
}