#include <bits/stdc++.h>
using namespace std;

// Function to count how many painters are needed
// if we fix the maximum time any single painter can take (maxTime)
int paintersRequired(vector<int>& boards, int maxTime) {
    int painters = 1;      // start with 1 painter
    long long currentSum = 0; // time given to the current painter so far

    for (int i = 0; i < boards.size(); i++) {
        // If adding this board keeps us within maxTime, give it to current painter
        if (currentSum + boards[i] <= maxTime) {
            currentSum += boards[i];
        } 
        // Otherwise, this board goes to a NEW painter
        else {
            painters++;              // hire a new painter
            currentSum = boards[i];  // new painter starts with this board's time
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int>& boards, int k) {
    int low = *max_element(boards.begin(), boards.end()); 
    // low = largest single board (minimum possible answer,
    // since one painter MUST paint the biggest board alone at least)

    int high = accumulate(boards.begin(), boards.end(), 0);
    // high = sum of all boards (case where only 1 painter paints everything)

    int ans = high; // will store the best (minimum) possible max time

    while (low <= high) {
        int mid = low + (high - low) / 2; 
        // mid = a candidate "max time" a painter can take

        int paintersNeeded = paintersRequired(boards, mid);
        // check how many painters are needed if max time allowed = mid

        if (paintersNeeded <= k) {
            // If painters needed is within limit k,
            // this mid is a VALID answer, but maybe we can do better (smaller)
            ans = mid;          // save this as a possible answer
            high = mid - 1;     // try to minimize further
        } else {
            // Too many painters needed, mid is too small, increase it
            low = mid + 1;
        }
    }
    return ans; // minimum possible value of "maximum time taken by any painter"
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2; // number of painters

    int result = findLargestMinDistance(boards, k);
    cout << "Minimum time required: " << result << endl;

    return 0;
}