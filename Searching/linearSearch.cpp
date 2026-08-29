#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found, return -1
}
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);//size of the array
    int x = 6;//Target element to search for
    
    int result = linearSearch(arr, n, x);
    if (result != -1) {
    cout << "Element found at index: " << result <<endl;
    } else {
        cout << "Element not found in the array." <<endl;
    }
    
    return 0;
}