#include <iostream>
#include <string>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   string str;
   int cnt=0,flag=1,len;
   cin >> len;
   cin >> str;
   for(int i=1;i<len-1;i++){
     if(str[i]=='.'){
     if(str[i-1]=='.' && str[i+1]=='.'){
       cout << 2 << endl;
       flag=0;
       break;
     }
     else cnt++;
     }
   }
   if(flag){ 
   if(str[0]=='.') cnt++;
   if(str[len-1]=='.'&&len>1) cnt++;
     cout << cnt << endl;
   }
 }
 return 0;
}