// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
  bool subsetSumHelper(int N, int arr[], int sum, vector<vector<int>> &dp) {
    if (sum == 0) {
      return true;
    }
    if (N == 0) {
      return false;
    }
    if (dp[N][sum] != -1) {
      return dp[N][sum];
    }
    if (arr[N - 1] > sum) {
      return dp[N][sum] = subsetSumHelper(N - 1, arr, sum, dp);
    } else if (arr[N - 1] <= sum) {
      return dp[N][sum] = subsetSumHelper(N - 1, arr, sum - arr[N - 1], dp) ||
                          subsetSumHelper(N - 1, arr, sum, dp);
    }
    return false;
  }

  bool isSubsetSum(int N, int arr[], int sum) {
    // code here
    vector<vector<int>> dp(N + 1, vector<int>(sum + 1, -1));
    bool ans = subsetSumHelper(N, arr, sum, dp);
    for (auto row : dp) {
      for (auto item : row) {
        cout << item << " ";
      }
      cout << "\n";
    }
    return ans;
  }
};

// { Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    int N, sum;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }
    cin >> sum;

    Solution ob;
    cout << ob.isSubsetSum(N, arr, sum) << endl;
  }
  return 0;
}
// } Driver Code Ends