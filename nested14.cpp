/* 
E
DE 
CDE 
BCDE
ABCDE
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number less than 27." << endl;
  cin >> n;
 for(int i=0;i<n;i++)
 {
   for(char ch=(65+n-i-1);ch<65+n;ch++)
   cout << ch << " ";
   cout << endl;
 }
 return 0;
}