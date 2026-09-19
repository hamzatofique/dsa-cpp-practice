#include<iostream>
#include<vector>
using namespace std;
void  getallsubsets(vector<int>& arr, vector<int> &ans,int i,vector<vector<int>>& allsubsets){
//base case first
if(i==arr.size()) {
    for(int digit : ans){
        allsubsets.push_back({ans});
    }
    cout<<endl;
    return;
}
    //inclution case
    ans.push_back(arr[i]);
    getallsubsets(arr,ans,i+1,allsubsets);
    ans.pop_back();//backTracking
    getallsubsets(arr,ans,i+1,allsubsets);//exclution
    //it is more like a phone call when we receive other call we listen it until the base case hit then we move backward 
    //to make the recent call recieved to solve it then we move backward called backtracking 
}
vector<vector<int>> allsubsets(vector<int> &nums){
    vector<vector<int>> allsubsets;
    vector<int>ans;
    getallsubsets(nums,ans,0,allsubsets);


}
