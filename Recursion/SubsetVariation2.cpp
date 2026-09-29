#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getAllSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allSubsets){
    if(i==nums.size()){
        allSubsets.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allSubsets);
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
     getAllSubsets(nums,ans,idx,allSubsets);

}
vector<vector<int>> subsetwithdup(vector<int>& nums){
    sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int>ans;
        getAllSubsets(nums,ans,0,result);
    return result;
    }
int main(){
    vector<int> nums={1,2,3,2};
      vector<vector<int>> res = subsetwithdup(nums);

     for(auto& subset : res){
        cout << "[";
        for(int j = 0; j < subset.size(); j++){
            cout << subset[j];
            if(j + 1 < subset.size()) cout << ",";
        }
        cout << "]\n";
    }
    cout << "Total: " << res.size() << endl;
    return 0;

}
