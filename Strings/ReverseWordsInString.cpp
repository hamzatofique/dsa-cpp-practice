#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    string reverseWords(string s) {
        int n=s.length();
string ans=""; //to word each word in it
        reverse(s.begin(),s.end()); //reverse the whole string along with spaces 
        for(int i=0;i<n;i++){
            string word="" ;// null string to store word then add this string to the ans string  
            while(i<n && s[i]!=' '){ // this loop gets the one word and terminates when the space is encountered bcz a word end in sapce 
            word+=s[i];
            i++;

            }
            reverse(word.begin(),word.end());//it reverse the word back to normal
            if(word.length()>0) //in case whole string is space 
            ans+=" " + word;
        }
        return ans.substr(1);//start printing from index one to skip first space 

    }
int main(){
    string s1=" hello   world";
    cout<<reverseWords(s1);

}