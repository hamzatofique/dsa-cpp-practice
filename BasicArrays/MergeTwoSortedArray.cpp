#include<iostream>
#include<vector>
using namespace std;
void MergeTwoSortedArray(vector<int> &A,int m,vector<int> &B,int n)  {
int idx = m+n-1,i=m-1,j=n-1;
//time complexity 0(n) s.c 0(1)
while(i>=0 && j>=0){ //it is valid in case when  first array has some space extra
    if(A[i]>=B[j]){ 
        A[idx--]=A[i--];//we replace element of A to the end of A and update index and i

    }
    else{
        A[idx--]=B[j--];//we replace element of B to the end of A and update index and j
    }
}
while(j>=0){ //when i<0 we need no change change bcz it doesnot effect it .It happend when majority larger elemnt are at array B
    //when j<0 we need to add remaing element that have been left in B bcz A have majority larger elemnts
     A[idx--]=B[j--];
     //if we store sorted array to 3rd array so weed need one more loop whilw(i>=0)    A[idx--]=B[j--];

}
}

int main(){
    vector<int> A={1,2,3,0,0,0}; int m=3;//the zeroes are the padded loactions pointing to value
    vector<int> B={4,5,6}; int n=3;
    MergeTwoSortedArray(A,m,B,n);
    for (int i = 0; i <m+n; i++)
    {
        cout<<A[i]<<" ";
    }
    

}