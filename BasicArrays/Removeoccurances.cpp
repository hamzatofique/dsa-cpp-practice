#include<iostream>
using namespace std;
//find the subarray and remove it from left to right 
string removeOccurrences(string &s, string &part) {//pass by reference
        while(s.length()>0 && s.find(part)<s.length()){//check if string has lenght and the subaaray is less then array
            s.erase(s.find(part),part.length());//find the subarray start position and erase it 
        }
        return s;
    }
    int main(){
        string s={"daabcbaabcbc"};
        string part ={"abc"};
        removeOccurrences(s,part);
        cout<<s;
    }