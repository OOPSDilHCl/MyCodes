#include <iostream>
#include <vector>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    if(n<3) cout << "NO" << "\n";
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    if(arr[0]==1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
  return 0;
}