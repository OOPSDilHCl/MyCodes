#include <iostream>
#include <vector>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
 int t;
 cin >> t;
 while(t--){
   vector<int> arr(3);
   for(int i=0;i<3;i++){
     cin >> arr[i];
   }
int maxi=max(arr[0],max(arr[1],arr[2]));
int mini=min(arr[0],min(arr[1],arr[2]));
int mid=arr[0]+arr[1]+arr[2]-maxi-mini;
int range1=maxi-mini;
int range2=mid;
   if(range1<range2) cout << range1 << "\n";
   else cout << range2 << "\n";
   
 }
 return 0;
}