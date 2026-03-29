#include <iostream>
#include <limits>
using namespace std;
int main()
{
 string s1, s2; // string is in small letters.
cout << "Enter the first string." << endl;
 cin >> s1 >> s2;
 cout << s1 << " " << s2;
 /*Enter the first string.
Hello To The World.
Hello To*/
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Enter the second string." << endl;
 string str;
 getline(cin,str);
 cout << str;
 return 0;
}