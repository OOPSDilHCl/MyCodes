#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& s,int i)
{
  if(i>=(int)s.length()/2)//s.size()←universal
  return true;
  if(s[i]!=s[s.length()-i-1]) 
  return false;
  return isPalindrome(s,i+1);
}
int main()
{
 string str;
 cout << "Enter a string: " << endl;
 cin >> str;
 if(isPalindrome(str,0))
 cout << str << " is palindrome" << endl;
 else  cout << str << " is not palindrome" << endl;
 return 0;
}