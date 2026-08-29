 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    // Example usage of the MostWater algorithm
    // This algorithm finds the maximum amount of water that can be contained between two lines represented by
    // an array of heights. The lines are vertical and the width between them is the distance between their indices.
    //we move the pointer of the smaller height to try and find a larger height that can contain more water
        vector<int> height={1,8,6,2,5,4,8,3,7}; 
 int lp=0,rp=height.size()-1;
        int maxwater=0;
        while(lp<rp){
        int w=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currentwater=w*ht;
        maxwater=max(maxwater,currentwater);
        height[lp]<height[rp]?lp++:rp--;
        }
        cout<<maxwater<<endl;
        return 0;
}   