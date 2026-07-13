#include <iostream>
int main()
{
 int x,n,power=1;
 std::cout << "Enter the base and power:" << std::endl;
 std::cin >> x >> n;
 if(x==0 && n==0)
 {
 std::cout << "Not defined!"<< std::endl;
 return 0;
 }
 for(int i=1;i<=n;i++)
 {
   power*=x;
 }
 std::cout << x << "^" << n << "=" << power << std::endl;
 return 0;
}