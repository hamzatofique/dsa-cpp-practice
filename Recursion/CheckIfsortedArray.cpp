#include<iostream>
using namespace std;
bool checkIfSort(int arr[], int n){
    if(n==0 ||n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && checkIfSort(arr,n-1);
}
int main(){
    int arr[] = {1, 2, 4, 3, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << checkIfSort(arr,size);
    return 0;
}