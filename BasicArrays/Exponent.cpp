#include<iostream>
// library for the pow function #include<cmath>
using namespace std;
int main(){
    // time complexity of this algorithm is O(logn) and space complexity is O(1)
    //efficient way to calculate the power of a number using binary exponentiation rather then result*=x n times which takes O(n) time complexity
    int x,n;
    cout<<"Enter the base number: ";
    cin>>x;
    cout<<"Enter the exponent number: ";
    cin>>n;  
    long long binform = n;
    //CORNER CASES
    if(n==0) return 1;
    if (x==0) return 0;
    if(x==1) return 1;
    if(x==-1){
        if(n%2==0) return 1;
        else return -1;
    }
    
    
    if(n<0){
        x=1/x;
        binform=-binform;
    }   
    double ans=1;
    while(binform>0){
        if(binform%2==1){ // it makes the binary representation but not changr aanything the value of the exponent
            ans=ans*x; //it is executed when the binary representation of the exponent has 1 at that position
    
        }
            x=x*x; //it is executed when the binary representation of the exponent has 0 at that position
            binform/=2; //reduces for next position in the binary representation of the exponent
        }
        cout<<"Result: "<<ans<<endl;
    
   //for power function cout<<"Result: "<<pow(x,n)<<endl;
    return 0;
}