#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //[number][frequency]
    int n=0;
    cout<<"How many numbers";
    cin>>n;
    int* input=new int [n];
    //inputing in pointer array
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    //worst case when no elemnt is duplicate in consecutive manner
    int** compArray=new int*[n];//we declare it according to worst
    for(int i=0;i<n;i++){//sets coloumns for the 2D compressed array
        compArray[i]=new int[2]; //number|freq
    }
    int row=0;
    int i=0;
    while(i<n){
        int value=input[i];
        int freq=1;
        while(i+1<n && input[i+1]==value){
            freq++;
            i++;
        }
        compArray[row][0]=value;
        compArray[row][1]=freq;
        row++;
        i++;
    }
    //dispalying compressed array
    for(int i=0;i<row;i++){
        cout<<compArray[i][0]<<" "<<compArray[i][1];
        cout<<endl;
    }
for(int i=0;i<n;i++){
    delete[] compArray[i];
}
delete[] compArray;
delete[] input;
return 0;

}