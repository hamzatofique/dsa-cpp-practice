#include<iostream>
using namespace std;
int main(){
    //giving no of rows and size of each row at prograaming time
    int rows=5;//no of rows are given
    int rowsize[5]={1,2,4,3,2};
    int** arr=new int*[rows];
    //here no need to track size of each row as int* rowsize=new int[rows] bcz the size is given as array
    for(int i=0;i<rows;i++){
        //allocate memory for each row
        arr[i]=new int [rowsize[i]];
        cout<<"Enter the values of row"<<i<<" ";
        for(int j=0;j<rowsize[i];j++){
            cin>>arr[i][j];
        }
    }
    //printing
    for(int i=0;i<rows;i++){
        for(int j=0;j<rowsize[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++){
        delete [] arr[i];
    }
    delete[] arr;
    arr=nullptr;
    return 0;
}