// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int equalPartitiionHelper(int N, int arr[], int sum,
                             vector<vector<int>> &dp) {
    if (sum == 0) {
      return 1;
    }
    if (N == 0) {
      return 0;
    }
    if (dp[N][sum] != -1) {
      return dp[N][sum];
    }
    if (arr[N - 1] > sum) {
      return dp[N][sum] = equalPartitiionHelper(N - 1, arr, sum, dp);
    } else if (arr[N - 1] <= sum) {
      return dp[N][sum] =
                 equalPartitiionHelper(N - 1, arr, sum - arr[N - 1], dp) ||
                 equalPartitiionHelper(N - 1, arr, sum, dp);
    }
    return 0;
  }

  int equalPartition(int N, int arr[]) {
    // code here
    int sum = 0;
    for (int i = 0; i < N; i++) {
      sum += arr[i];
    }
    if (sum % 2 != 0) {
      return 0;
    }
    vector<vector<int>> dp(N + 1, vector<int>((sum / 2) + 1, -1));
    int ans = equalPartitiionHelper(N, arr, sum / 2, dp);
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
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
      cin >> arr[i];

    Solution ob;
    if (ob.equalPartition(N, arr))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
} // } Driver Code Ends