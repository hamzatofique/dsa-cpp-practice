#include <bits/stdc++.h>
#include<vector>
using namespace std;
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int count =0;
       vector<int>prefixSum(n,0);//prefix sum array declared to store zero in all array till n-1
       prefixSum[0]=nums[0];//first element of the prefix sum array is equal to the first element of the input array
       for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1] + nums[i];//prefix sum array is equal to the sum of the previous element and the current element of the input array
       } 
       unordered_map<int,int>m;//prefixsum,freq
       for(int j=0;j<n;j++){
        if(prefixSum[j]==k) count++;//case 2: when the prefix sum is equal to k, we have found a subarray with sum equal to k
        //example: nums=[1,2,3], k=3, prefixSum=[1,3,6], when j=1, 
        //(1,1+2=3,3+3=6)prefixSum[1]=3=k, we have found a subarray [1,2] with sum equal to k
        int val=prefixSum[j]-k; //case 1: when the prefix sum is greater than k, we have to check if there is a prefix sum that is equal to prefixSum[j]-k, if yes then we have found a subarray with sum equal to k
        if(m.find(val)!=m.end()){
            count+=m[val];//if we have found a prefix sum that is equal to prefixSum[j]-k, we add the frequency of that prefix sum to the count
        }
        if(m.find(prefixSum[j])==m.end()){//if the prefix sum is not present in the map, we add it to the map with frequency 0 bcz we have already counted the subarray with sum equal to k, so we don't want to count it again
            m[prefixSum[j]]=0;//we initialize the frequency of the prefix sum to 0 bcz we have already counted the subarray with sum equal to k, so we don't want to count it again
        }
        m[prefixSum[j]]++;//we increment the frequency of the prefix sum by 1
       }
       return count;
    }
int main(){
    vector<int> nums = {1,5,2,-4,1,2,1};//-4+1+2+1=0, 5+2-4+1=4, 2-4+1+2=1, 1+2+1=4, 2+1=3, 1=1 subarray combinations
    int k = 0;//we have to check onlu continuous elements of the array which sum up to k
    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum equal to " << k << ": " << result << endl;
    return 0;
}