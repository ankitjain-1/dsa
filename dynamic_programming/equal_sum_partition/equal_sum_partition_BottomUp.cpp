// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int equalPartition(int N, int arr[]) {
    // code here
    int sum = 0;
    for (int i = 0; i < N; i++) {
      sum += arr[i];
    }

    if (sum % 2 != 0) {
      return 0;
    }
    int sumHalf = sum / 2;
    vector<vector<int>> dp(N + 1, vector<int>((sumHalf) + 1));

    // initialization of the table
    for (int i = 0; i < N + 1; i++) {
      dp[i][0] = true;
    }
    for (int i = 1; i < sumHalf + 1; i++) {
      dp[0][i] = false;
    }

    for (int i = 1; i < N + 1; i++) {
      for (int j = 1; j < sumHalf + 1; j++) {
        if (arr[i - 1] > j) {
          dp[i][j] = dp[i - 1][j];
        } else if (arr[i - 1] <= j) {
          dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
      }
    }
    return dp[N][sumHalf];
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