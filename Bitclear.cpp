#include <iostream>
int main()
{
  int n,pos;
  std::cout<<"Enter a number and the position to Clear bit to 0:";
  std::cin>>n>>pos;
  int bitMask=1<<pos;
  int newBitMask=~(bitMask);
  int newNumber=newBitMask&n;
  std::cout<<newNumber;
 return 0;
}