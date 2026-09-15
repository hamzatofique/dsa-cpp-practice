#include<iostream>
using namespace std;
int fab(int n){
if(n==0){//first elemnt is always zero
    return 0;
}
if(n==1){//second element is always one
    return 1;
}
    return fab(n-1)+fab(n-2);//calling the function recursively to get the sum of previous two elements at each iteration
    //backtracking will give the final result as the function will return the sum of previous two elements at each iteration
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series: ";
    for(int i=0;i<n;i++){
        cout<<fab(i)<<" ";
    }
    return 0;
}