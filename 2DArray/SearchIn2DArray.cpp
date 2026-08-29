#include<iostream>
#include<vector>
using namespace std;
//approach 1 : As the rows are in non decreasing order so we apply binary serach first to coloumns to get which row has the target then we move to that row to apply binary search to get our target
bool SearchInRow(vector<vector<int>>& matrix, int target,int row){
    int n=matrix[0].size();
    int st=0,end=n-1;
    // linerly applied binary search in the row and it searches every elemnt in the row coloumn wise to check if out target is there or not
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target == matrix[row][mid]){
            return true;
        }
        else if(target >matrix[row][mid]){
            st=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int st=0,end=m-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target>=matrix[mid][0] && target<= matrix[mid][n-1]){
                return SearchInRow(matrix,target,mid); 
            }
            else if(target>matrix[mid][n-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
         return false;
    }
int main(){
    vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}}; //2D-vector
cout<<searchMatrix(matrix,34);
}