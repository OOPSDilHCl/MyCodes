#include <iostream>
int main(){
  int n,pos;
  std::cout<<"Enter a number and the position to check:";
  std::cin>>n>>pos;
  int bitMask=1<<pos;
if((bitMask&n)==0) std::cout<<"Bit is zero.";
else std::cout<<"Bit is one.";
}