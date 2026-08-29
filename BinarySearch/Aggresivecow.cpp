#include <bits/stdc++.h>
using namespace std;

// Function to check: can we place all 'cows' in stalls
// such that minimum distance between any two cows is >= minDist?
bool canPlaceCows(vector<int>& stalls, int cows, int minDist) {
    int count = 1;              // place first cow at the first stall
    int lastPosition = stalls[0]; // position of the last placed cow

    for (int i = 1; i < stalls.size(); i++) {
        // If current stall is far enough from the last placed cow
        if (stalls[i] - lastPosition >= minDist) {
            count++;                  // place a cow here
            lastPosition = stalls[i]; // update last placed position
        }

        // If we've already placed all cows successfully, no need to continue
        if (count >= cows) {
            return true;
        }
    }
    return false; // couldn't place all cows with this minDist
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end()); 
    // MUST sort stalls first, since positions need to be in order
    // to correctly measure gaps between them

    int low = 1; 
    // minimum possible distance between cows (can't be 0 or negative)

    int high = stalls.back() - stalls.front(); 
    // maximum possible distance = distance between first and last stall

    int ans = 0; // will store the largest minimum distance possible

    while (low <= high) {
        int mid = low + (high - low) / 2; 
        // mid = candidate minimum distance between cows

        if (canPlaceCows(stalls, cows, mid)) {
            // If it's possible to place cows with at least 'mid' distance,
            // this is a valid answer — but try for an even LARGER distance
            ans = mid;
            low = mid + 1;
        } else {
            // Not possible with this much distance, reduce it
            high = mid - 1;
        }
    }
    return ans; // maximum possible minimum distance
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 3;

    int result = aggressiveCows(stalls, cows);
    cout << "Largest minimum distance: " << result << endl;

    return 0;
}