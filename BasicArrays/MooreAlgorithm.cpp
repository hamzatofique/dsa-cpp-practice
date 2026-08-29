#include<iostream>
using namespace std;
int  main(){
    //this is the implementation of moore's voting algorithm which is used to find the majority element in an array
    int arr[]={2,2,2,2,6,4,2,4,4,2,6,2};
    int n=12;   
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
if(freq==0){ // for first iteration we will take the first element as the majority element and set its frequency to 1
    ans=arr[i];
    freq=1;//we increase the frequency of the majority element
}
if(ans==arr[i]){ //if the current element is equal to the majority element we increase its frequency
    freq++;
}
else{ // if the current element is not equal to the majority element we decrease its frequency
    freq--;
}
    }
    cout<<ans;
    // From below this is the code if we not given if there is a majority element or not
int count=0;
for(int val:arr){
    if(val==ans){
        count++;
    }
}
if (count>n/2){
    cout<<" is the majority element";
}
else{
    cout<<" is not the majority element";
}
    return 0;
}