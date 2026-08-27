#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n,m,flag=0,overall=1;
    cin >> n >> m;
    vector<string> str(n);
    vector<string> newstr(m);
    unordered_set<char> st;
    for(int i=0;i<n;i++){
      cin >> str[i];
      st.insert((char)(str[i][0]-32));
    }
    for(int i=0;i<m;i++){
      cin >> newstr[i];
    }
    for(int i=0;i<m;i++){
     flag=0;
     int l=newstr[i].size();
     for(int j=0;j<l;j++){
     if(st.find(newstr[i][j])==st.end()){
         flag=1;
         break;
       }
      }
      if(flag){
        overall=0;
        break;
      }
    }
    cout << (overall?"Yes":"No") << "\n";
  } 
  return 0;
}