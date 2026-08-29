#include<iostream>
using namespace std;
void Bubblesort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool isTrue=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isTrue=true;
            }
        }
        if(!isTrue){
            return;
        }
    }

}
void Selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){//i is the index of the current element to be placed in its correct position
        int minIndex=i; // we consider the current element as the minimum and we will find the minimum in the unsorted part of the array
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
void Insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
   int arr[]={1,3,4,2};
   int n=4;
   Insertionsort(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}