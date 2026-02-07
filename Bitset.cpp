#include <iostream>
int main()
{
  int n,pos;
  std::cout<<"Enter a number and the position to Set bit to 1:";
  std::cin>>n>>pos;
  int bitMask=1<<pos;
  int newNumber=bitMask|n;
  std::cout<<newNumber;
 return 0;
}