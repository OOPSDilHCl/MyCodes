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
   vector<int> a(n),b;
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   b.push_back(a[0]);
   for(int i=1;i<n;i++){
     if(a[i]>=a[i-1]){
       b.push_back(a[i]);
     }
     else{
       b.push_back(1);
       b.push_back(a[i]);
     }
   }
   cout << b.size() << endl;
   for(int x : b){
     cout << x << " ";
   }
   cout<< "\n";  
 }
 return 0;
}