#include <iostream>
int power(int x,int n)//stack height=logn
{
  if(n==0) return 1;
  if(x==0) return 0;
  if(n%2==0) 
  return power(x,n/2)*power(x,n/2); 
  else 
  return power(x,n/2)*power(x,n/2)*x;
}
int main()
{
 int x,n;
 std::cout<<"Enter the base and power:";
 std::cin>>x>>n;
 std::cout<<x<<"^"<<n<<"="<<power(x,n);
 return 0;
}