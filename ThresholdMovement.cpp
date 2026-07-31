#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   int n,flag=1;
   cin >> n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
     cin >> arr[i];
   }
   for(int i=0;i<n-1;i+=2){
     if(arr[i]-arr[i+1]<2){
       cout << "NO" << endl;
       flag=0;
       break;
     }
   }
   if(flag)
   cout << "YES" << endl;
 }
 return 0;
}