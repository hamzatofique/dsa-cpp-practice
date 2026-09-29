#include<iostream>
#include<vector>
using namespace std;
void getPermutation(vector<int>& nums,int idx,vector<vector<int>>& ans){
    if(idx==nums.size()){
        ans.push_back({nums});//pushes as a pair 
        return;
    } for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
        getPermutation(nums,idx+1,ans);

        swap(nums[idx],nums[i]);//bacl tracking we want to keep the array same as original
    }
}
vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    getPermutation(nums,0,ans);
    return ans;
}
int main(){
vector<int> nums={1,2,3};
vector<vector<int>> res=permute(nums);
for(auto& perm: res){
    cout<<"[";
    for(int j = 0; j < perm.size(); j++){
            cout << perm[j];
            if(j + 1 < perm.size()) cout << ",";
        }
        cout << "]\n";
    }
}