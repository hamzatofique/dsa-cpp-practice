#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    //use binary search to find the peak index in the mountain array
        int st=1,end=arr.size()-2;// we start from 1 and end at size-2 because the peak cannot be at the first or last index in a mountain array
        while(st<=end){
           int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){ //check if mid is the peak element by comparing it with its neighbors because in a mountain array, the peak element is greater than its neighbors
                return mid;
            }
            else if(arr[mid-1]<arr[mid]){ //if the left neighbor is less than mid, it means we are in the increasing part of the mountain array, so we move to the right half to find the peak
                st=mid+1;
            }
            else{ //then we are in the decreasing part of the mountain array, so we move to the left half to find the peak
                end=mid-1;
            }
        }
        return -1;
    }
    int main(){
        vector<int> arr = {0,3,8,9,5,2};
        int result = peakIndexInMountainArray(arr);
        cout<< arr[result]<<endl;
        return 0;
    }