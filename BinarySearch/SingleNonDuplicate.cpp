#include<iostream>
#include<vector>
using namespace std;    
int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=n-1;
        if(n==1) return nums[0];

          while(st<=end){
            int mid=st+(end-st)/2;
              if(mid==0 && nums[0]!=nums[1]) {return nums[mid]; st=mid+1; continue;}
               if(mid==n-1 && nums[n-1]!=nums[n-2]) {return nums[mid]; end=mid-1; continue;}
                 if( mid<n-1 && mid>0 && nums[mid+1]!=nums[mid] && nums[mid]!=nums[mid-1]) return nums[mid];
                  if(mid%2==0){
                    if(nums[mid-1]==nums[mid]){
                        end=mid-1;
                    }
                    else 
                    st=mid+1;
                  }
                  else{
                    if(nums[mid-1]==nums[mid]){
                        st=mid+1;
                    }
                    else 
                    end=mid-1;
                  }
          }
    return -1;
}
 int main(){
            vector<int> nums = {1,1,2,2,4,4,8,8,9,9,10,10,11};
            int result = singleNonDuplicate(nums);
            cout<< result <<endl;
            return 0;
          }     