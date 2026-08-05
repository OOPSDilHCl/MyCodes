#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   int n,x;
   cin >> n >> x;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
     cin >> arr[i];
   }
   int gap=arr[0];
   for(int i=1;i<n;i++){
     gap=max(arr[i]-arr[i-1],gap);
   }
   gap=max(gap,2*(x-arr[n-1]));
   cout << gap << endl;
 }
 return 0;
}