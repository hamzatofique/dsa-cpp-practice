#include <bits/stdc++.h>
using namespace std;
// we can use dutch national flag algorithm to sort the array of 0s,1s and 2s in one pass of the array with time complexity O(n) and space complexity O(1)
// we can also sort colors or balls etc like this
void sortColors(vector<int>& nums) {
         int n= nums.size();
         //three pointers low,mid and high to keep track of the three partitions of the array
         // time complexity is O(n) and space complexity is O(1)
        int mid=0,low=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]); //left partiton of the array will be 0s and right partition will be 2s and middle partition will be 1s
                low++;
                mid++;
            }
            else if(nums[mid]==1){ //second  partition of the array will be 1s
                mid++;
            }
            //third partition will be our unsorted array and we will keep on swapping the elements of the unsorted array with the correct partition of the array accroding to the value of the element in the mid pointer
            else{ //right partition of the array will be 2s
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}