#include<iostream>
#include<algorithm>
using namespace std;
int main(){// Majority Element using Sorting better aproach time complexity O(nlogn) and space complexity O(1)
    int arr[5]={1,2,3,2,2}; 
    int n=5;
    sort(arr,arr+n);
    int freq=1;
    int ans=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            freq=1; // resets frequency count if new element is found
            ans=arr[i];
        }
        if(freq>n/2){ //Check if the frequency of the current element is majority
            ans=arr[i];
            break;//Break the loop if we found the majority element beacause there is only one majority element in the array
        }
    }
    cout<<"Majority element is: "<<ans<<endl;
    return 0;
}