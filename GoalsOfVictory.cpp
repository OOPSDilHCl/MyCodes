#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   int n,sum=0;
   cin >> n;
   vector<int> arr(n-1);
   for(int i=0;i<n-1;i++){
     cin >> arr[i];
     sum+=arr[i];
   }
   cout << -sum << "\n";
 }
 return 0;
}