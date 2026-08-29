#include<iostream>
#include<vector>
using namespace std;    
// This code snippet demonstrates an efficient approach to search for a target value in a rotated sorted array using binary search. The time complexity is O(log n) and the space complexity is O(1).
//we appply modified binary approach to it
int search(vector<int>& nums, int target) { // & nums is used because we are passing by reference to avoid copying the entire vector, which is more efficient in terms of memory and performance.
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[start]<=nums[mid]){//left sorted
            if(nums[start]<=target && target<=nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            }
            else
            if(nums[mid]<=target && target<=nums[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            }
            return -1;
        }
    int main(){
        vector<int> nums = {4,5,6,7,0,1,2};
        int target = 0;
        int result = search(nums,target);
        cout<<result<<endl;
        return 0;
    }