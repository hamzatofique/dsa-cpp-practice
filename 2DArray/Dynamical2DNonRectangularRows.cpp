#include<iostream>
using namespace std;
int main(){
    //in this program we are getting the no of rows and also the length of each row by the user 
    //uses the concept of dynamic alocation
    int rows;
    cout<<"Enter number of rows?";
    cin>>rows;
    if(rows<=0){
        cout<<"size must be positive";
    }
    int** arr=new int*[rows];
    int* rowsize=new int[rows];

    for(int i=0;i<rows;i++){
        cout<<"Enter the size of row"<<i;
        cin>>rowsize[i];
        if(rowsize[i]==0) arr[i]==nullptr;//handles the case when the row size is zero so it displays the nullptr
        arr[i]=new int [rowsize[i]];
        cout<<"Enter values for row "<<i<<" ";
        for(int j=0;j<rowsize[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rowsize[i];j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++){
        delete[] arr[i];
    }
    delete[] arr;
    arr =nullptr; //to avoid dangling pointer
return 0;
}