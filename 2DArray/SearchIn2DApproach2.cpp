#include<iostream>
#include<vector>
using namespace std;
//Approach 2 : here all row and all coloumns are acsending and the range of the rows is overlapping
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();//rows and coloumn in a 2D array
        int r=0,c=n-1;
        while(c>=0 &&r<m){ //checks if rows and cols are in bound
            if(target == matrix[r][c]) // corner element is target
            return true;
            else if(target<matrix[r][c]) //if not then move left by decreasing col
            c--;
            else //if the next col is less then target search that col to get the answer
            r++; //if linearly move to the designated array to get our target
        }
        return false;
    }
    int main(){
        vector<vector<int>> matrix ={{1,4,5,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
        cout<<searchMatrix(matrix,5);
    }
