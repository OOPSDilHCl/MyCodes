#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> answer;
        vector<int> ds;
        backtrack(answer, ds, candidates, target, 0);
        return answer;
    }
private:
    void backtrack(vector<vector<int>>& answer, vector<int>& ds,vector<int>& candidates,int target,size_t i){
        if(target==0){
            answer.push_back(ds);
            return;
        }
if(i>=candidates.size()||candidates[i]>target){
            return;
        }
ds.push_back(candidates[i]);
backtrack(answer,ds, candidates, target-candidates[i],i+1);
ds.pop_back();
while(i+1<candidates.size() && candidates[i]==candidates[i+1]) i++;
backtrack(answer,ds,candidates,target,i+1);
    }
};
int main(){
  Solution object;
  vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
  vector<vector<int>> result=object.combinationSum2(candidates,target);
  for (const auto& combination : result) {
        cout << "  [";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}