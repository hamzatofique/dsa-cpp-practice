#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr = {2, 4, 6, 8, 10};
     int i=0 ,j=arr.size()-1;
     int target = 12;
     //done by using two pointer approach
  while(i<j){// time complexity is O(n) and space complexity is O(1)
      if(arr[i]+arr[j]==target){
          cout<<"Indices: "<<i<<" "<<j<<endl;
          return 0; 
      }
      else if(arr[i]+arr[j]<target){ // move i forward to increase the sum
          i++;
      }
      else{ // move j backward to decrease the sum
          j--;
      }
  }
    return 0;
}