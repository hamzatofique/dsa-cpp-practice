#include <iostream>
#include <vector>
using namespace std;
int main() {
    // time complexity is O(n^2) and space complexity is O(1) not efficient but works for small input size
// This code snippet demonstrates a brute-force approach to calculate the product of an array except for the current index.
/* vector<int> nums = {1, 2, 3, 4};
 int n = nums.size();
    for(int i = 0; i < n; i++) {
        // Implementation for product of array except self
        for(int j = 0; j < n; j++) {
            if(i != j) { // this condition ensures we skip the current index
                cout << nums[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;   
} */
//optimized approach with time complexity O(n) and space complexity O(1) using two passes
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> result(n, 1); // Initialize result array with 1s

    // First pass: Calculate the product of all elements to the left of each index(prefix)
    int leftProduct = 1;
    for(int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Second pass: Calculate the product of all elements to the right of each index(suffix)
    // dry run for better understanding
    // For the input nums = [1, 2, 3, 4], the first pass will fill the result array with the products of elements to the left:
    // result = [1, 1, 2, 6]
    // The second pass will multiply each element by the product of elements to its right:
    // result = [24, 12, 8, 6]
    int rightProduct = 1;
    for(int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    // Output the result
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}