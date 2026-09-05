#include<iostream>
#include<unordered_map>
using namespace std;
int Hashing(int arr[],int n,int target){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int first=arr[i];
        int second=target-arr[i];
        if(m.find(second)!=m.end()){
            //runs when the complement of the current element is found in the map ie the current element is present in the map
            cout<<"The two numbers that add up to "<<target<<" are: "<<first<<" and "<<second<<endl;
            return 1;
        }
        m[first]=i;
    }
    cout<<"No two numbers found that add up to "<<target<<endl;
    return 0;
}
int main(){
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    Hashing(arr, n, target);
    return 0;
}   