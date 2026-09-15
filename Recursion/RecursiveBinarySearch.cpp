#include<iostream>
using namespace std;
int Binarysearch(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return Binarysearch(arr,s,mid-1,key);
    }
    else{
        return Binarysearch(arr,mid+1,e,key);
    }
    return -1;
}
int main(){
    int arr[] = {1, 7, 12, 15, 18};
    int tar=15;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Target found at index"<<Binarysearch(arr, 0, n-1, tar);
    return 0;
}