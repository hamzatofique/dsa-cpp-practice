//leetcode problem # 15
//checks which triplet gvies sum of zero
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){//loop runs till n-2 because we need atleast 3 elements to form a triplet
            if(i>0 && nums[i]==nums[i-1]){ //skip duplicate elements to avoid duplicate triplets
                continue;
            }
            int j=i+1,k=n-1;
            while(j<k){ //two pointer approach to find the other two elements of the triplet
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){ //if sum is less than zero we need to increase the sum so we move the left pointer to the right
                    j++;
                }
                else if(sum>0){ //if sum is greater than zero we need to decrease the sum so we move the right pointer to the left
                    k--;
                }
                else{ //if sum is zero we found a triplet
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
                while (j < k && nums[j] == nums[j - 1]) // Skip duplicate j
                        j++;

                    // Skip duplicate k
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
    int main(){
        vector<int> nums = {-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = threeSum(nums);
        for (const auto& triplet : result) {
            cout << "[";
            for (size_t i = 0; i < triplet.size(); ++i) {
                cout << triplet[i];
                if (i < triplet.size() - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        }
        return 0;
    }
