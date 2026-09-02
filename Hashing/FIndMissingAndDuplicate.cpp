#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     vector<int>ans;
     unordered_set<int> s;
     int a,b;
     int expsum=0,actualsum=0;
     int n=grid.size();
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualsum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
       
     }
      expsum=(n*n)*(n*n+1)/2;
        b=expsum+a-actualsum;
        ans.push_back(b);
        return ans; 
    }  
    int main(){
        vector<vector<int>> grid={{1,2,3},{3,4,5},{6,7,8}};
        vector<int> ans=findMissingAndRepeatedValues(grid);
        cout<<"The repeated value is: "<<ans[0]<<endl;
        cout<<"The missing value is: "<<ans[1]<<endl;
        return 0;
    }