#include<iostream>
#include<vector>
using namespace std;    
    int findDuplicate(vector<int>& nums) {
        //using slow and fast pointer
        //imagining array as Linked list
        int slow=nums[0],fast=nums[0];
        do{//runs it one time to get the first intersection point
            slow=nums[slow]; //+1
            fast=nums[nums[fast]]; //+2
        }while(slow!=fast);
         slow=nums[0];
        while(slow!=fast){
            
            slow=nums[slow]; //+1
            fast=nums[fast];//+1
        }
        return slow;
    }
    int main(){
        vector<int> nums={1,3,4,2,2};
        int ans=findDuplicate(nums); 
        cout<<"The duplicate number is: "<<ans<<endl;
        return 0;
    }