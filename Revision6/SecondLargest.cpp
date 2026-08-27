#include <iostream>
#include <climits>
using namespace std;
int main(){
  int large=INT_MIN,slarge=INT_MIN;
  int v[]={7,1,4,3,9};
  int len=sizeof(v)/sizeof(v[0]);
  for(int i=0;i<len;i++){
    if(large<v[i]){
      slarge=large;
      large=v[i];
    }
    else if(slarge<v[i]&&large!=v[i]){
      slarge=v[i];
    }
  }
  cout << large << " " << slarge << "\n";
  return 0;
}
/*
run SecondLargest.cpp  9 7
*/