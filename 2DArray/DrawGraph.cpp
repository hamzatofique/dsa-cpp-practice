#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //problem 1
    ifstream fin("Input.txt");
    if(!fin){
        cout<<"could not open the file error";
        return 1;
    }
    string numstr;
    fin>>numstr;
    fin.close();
    int N=numstr.size();
    int **arr=new int*[N];//2D pointer
    int* rowsize=new int[N];//pointer to track the rowsize
//allocatiing memory
for(int i=0;i<N;i++){
    int digit=numstr[i]-'0';
    rowsize[i]=digit;//keep the size in row size array
    if(digit==0){ //case 1:size is empty
    arr[i]=nullptr;
    }
else{//case 2 : size is not empty
    arr[i]=new int [rowsize[i]];
    for(int j=0;j<rowsize[i];j++){
        arr[i][j]=1;//here i am only assigning a general value

    }
}
}
//only to see the structure
//tallest row track
int maxrow=0;
for(int i=0;i<N;i++){
    if(rowsize[i]>maxrow){
        maxrow =rowsize[i];
    }

}
//pattern 
for(int level=maxrow;level>=1;level--){
    for(int i=0;i<N;i++){
        if(rowsize[i]>=level) cout<<"*";
        else if(rowsize[i]==0 && level==1) cout<<"-"; //null ptr condition
        else cout<<" ";
        
    }
    cout<<endl;
}
//deleting 2D pointer
for(int i=0;i<N;i++){
    delete[] arr[i];
}
delete[] arr;
delete[] rowsize;
return 0;
}