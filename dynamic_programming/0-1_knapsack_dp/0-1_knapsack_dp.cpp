// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  // Function to return max value that can be put in knapsack of capacity W.
  int knapSackHelper(int W, int wt[], int val[], int n,
                     vector<vector<int>> &dp) {
    // Your code here
    if (W == 0 || n == 0) {
      return 0;
    }
    if (dp[W][n] != -1) {
      return dp[W][n];
    }
    if (wt[n - 1] <= W) {
      return dp[W][n] = max(
                 val[n - 1] + knapSackHelper(W - wt[n - 1], wt, val, n - 1, dp),
                 knapSackHelper(W, wt, val, n - 1, dp));
    } else if (wt[n - 1] > W) {
      return dp[W][n] = knapSackHelper(W, wt, val, n - 1, dp);
    }
    return 0;
  }

  int knapSack(int W, int wt[], int val[], int n) {
    vector<vector<int>> dp(W + 1, vector<int>(n + 1, -1));
    int ans = knapSackHelper(W, wt, val, n, dp);
    return ans;
  }
};

// { Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // taking total testcases
  int t;
  cin >> t;
  while (t--) {
    // reading number of elements and weight
    int n, w;
    cin >> n >> w;

    int val[n];
    int wt[n];

    // inserting the values
    for (int i = 0; i < n; i++)
      cin >> val[i];

    // inserting the weights
    for (int i = 0; i < n; i++)
      cin >> wt[i];
    Solution ob;
    // calling method knapSack()
    cout << ob.knapSack(w, wt, val, n) << endl;
  }
  return 0;
} // } Driver Code Ends