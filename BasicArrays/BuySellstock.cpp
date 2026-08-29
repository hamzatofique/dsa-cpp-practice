#include <iostream>
using namespace std;
int main(){
    // Example usage of the BuySellStock algorithm
    // This algorithm finds the maximum profit that can be achieved from a single buy and sell of stock prices given in an array.
    //buy one day and sell on another day to maximize profit
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int maxprofit = 0, bestbuy = prices[0];
    for (int i = 1; i < n; i++) {
        if (prices[i] > bestbuy) {
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }
    cout << maxprofit << endl;
    return 0;
}