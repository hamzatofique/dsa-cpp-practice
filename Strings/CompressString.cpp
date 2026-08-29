#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Compress(vector<char> &chars){
    int n=chars.size();
    int idx=0;
    for(int i=0;i<n;i++){
        char ch=chars[i];
        int count =0;
        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        if(count ==1) chars[idx++]=ch; //case 1 :when char appear one we simplu print it
        else{
            chars[idx++]=ch; // case 2: when char appear multiple time here print the cahr
            string str =to_string(count); // char to int(no of time the char appear)
            for(char digit:str){ 
                chars[idx++]=digit; //print the digit one by one
            }

        }
        i--; // move i one index behind so that it compares the different element that violates the char[i]==ch

    }
    chars.resize(idx); //resize array by idx
    return idx; // returnd the size of the compressed array bcz idx is array size at end
}

int main(){
    vector <char> chars={'a','a','b','b','c','c','c'};
   cout<< Compress(chars);
}