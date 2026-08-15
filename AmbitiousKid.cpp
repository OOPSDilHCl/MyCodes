#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,mini=INT_MAX;
  cin >> n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin >> arr[i];
    mini=min(abs(arr[i]),mini);
  }
  cout << mini << "\n";
  return 0;
}