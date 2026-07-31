#include <iostream>
#include <string>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   string str;
   int len;
   cin >> len;
   cin >> str;
   if(str.find("...")!=/*string::npos means not found.*/string::npos){
     cout << 2 << endl;
   }
   else{
     int cnt=0;
     for(char c : str){
       if(c=='.') cnt++;
     }
     cout << cnt << endl;
   }
 }
 return 0;
}