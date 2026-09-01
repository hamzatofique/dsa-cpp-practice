#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        int first = nums[i], second = target - nums[i]; //target - first = second is actually a complement of first
        if (numMap.find(second) != numMap.end()) { //checks if our complement exists in the map or not
            result.push_back(numMap[second]); //pushes the index of the complement
            result.push_back(i); //pushes the index of the current element
            break; //breaks the loop if we found the solution
        }
        numMap[first] = i;
    }
    return result;//return the result vector if a solution is found
}