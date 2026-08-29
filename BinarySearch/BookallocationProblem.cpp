#include<iostream>
#include<vector>
using namespace std;    
bool isValid( vector<int> &arr, int n, int m, int MaxPages){
    // This function should implement the logic to check if the current mid value can be a valid allocation
    // For now, we will return true as a placeholder. You need to implement the actual logic based on your requirements.
    int st=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>MaxPages) return false;
        if(pages+arr[i]>MaxPages){
            pages+=arr[i];
        
        }
        else{
            st++;
            pages=arr[i];
            if(st>m) return false;
        }
    }
    if(st>m) return false;
    return true; // Placeholder
}
int allocatebook(vector<int> &arr, int n, int m){
    if(m>n) return -1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int studentcount=1,pagesum=0;
            if(isValid(arr, n, m, mid)){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }           
            }
            return ans;
}
int main(){
    vector<int> arr = {2,1,3,4};
    int n = arr.size();
    int m = 2;
    cout << allocatebook(arr, n, m) << endl;

}