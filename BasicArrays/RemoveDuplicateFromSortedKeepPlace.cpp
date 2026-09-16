#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    // Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.
// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.
        if(nums.empty()) return 0;
        int k=1;
        for(int i=1;i<nums.size();i++){//two pointer approach 
            if(nums[i]!=nums[k-1]){ //used kind of slow pointer and fast pointer
                nums[k]=nums[i];//stores it in array
                k++;
            }

    }
    return k;
    }
    int main(){
        vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
        int k = removeDuplicates(nums);
        cout << "The length of the modified array is: " << k << endl;
        cout << "The modified array is: ";
        for(int i=0;i<k;i++){
            cout<<nums[i]<<" ";
        }
        return 0;
        //slow pointer-i      fast pointer-k
        //trace table
        // i | k | nums[i] | nums[k] | Action
        //for i=1, k=1, nums[i]=1, nums[k]=1, no action
        //for i=2, k=1, nums[i]=2, nums[k]=1, nums[k]=nums[i], k=2
        //for i=3, k=2, nums[i]=2, nums[k]=2, no action
        //for i=4, k=2, nums[i]=3, nums[k]=2, nums[k]=nums[i], k=3
        //for i=5, k=3, nums[i]=4, nums[k]=3, nums[k]=nums[i], k=4
        //for i=6, k=4, nums[i]=4, nums[k]=4, no action
        //for i=7, k=4, nums[i]=5, nums[k]=4, nums[k]=nums[i], k=5


    }