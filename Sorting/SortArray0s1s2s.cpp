#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    //approach one use sorting algorithm like bubble sort, selection sort, insertion sort etc
    //approach two use counting sort algorithm like this T.C O(n) and S.C O(1).It uses two pass of the array one to count and one to overwrite the array
    //approach three use dutch national flag algorithm T.C O(n) and S.C O(1) but it uses only one pass of the array
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=rand()%3;
    }
    int count0=0,count1=0,count2=0;
    int n=10;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }

    int i=0;
    while(count0){
        arr[i++]=0;
        count0--;
    }
    while(count1){
        arr[i++]=1;
        count1--;
    }
    while(count2){
        arr[i++]=2;
        count2--;
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}