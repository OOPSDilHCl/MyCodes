#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   int n;
   cin >> n;
   vector<int> a(n);
   int c=0,c1=0;
   for(int i=0;i<n;i++){
     cin >> a[i];
     if(a[i]==2) c++;
   }
   if(c==0){
   cout << 1 << endl;
   continue;
   }
   if(c%2){
   cout << -1 << endl;
   continue;
   }
   for(int i=0;i<n;i++){
     if(a[i]==2) c1++;
     if(c1==c/2){
     cout << i+1 << endl;
     break;
     }
   }
 }
 return 0;
}