// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include <bits/stdc++.h>
#include <climits>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum(int n, int m, vector<vector<int>> &a);

// Driver program to test maximumSum
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> arr[i][j];

    cout << maximumSum(n, m, arr) << endl;
  }
  return 0;
}
// } Driver Code Ends

int maximumSum(int n, int m, vector<vector<int>> &a) {
  // Complete the function
  int ans = 0;
  int prevMax = INT_MIN;
  for (int j = 0; j < m; j++) {
    int item = a[n - 1][j];
    if (item > prevMax) {
      prevMax = item;
    }
  }
  ans += prevMax;
  for (int i = n - 2; i >= 0; i--) {
    bool flag = true;
    int localMax = INT_MIN;
    for (int j = 0; j < m; j++) {
      int item = a[i][j];
      int prev;
      if (j == 0) {
        prev = INT_MIN;
      } else {
        prev = a[i][j - 1];
      }
      if (item < prevMax && item > localMax) {
        localMax = item;
        flag = false;
      }
    }
    prevMax = localMax;
    if (flag) {
      return 0;
    }
    ans += prevMax;
  }
  return ans;
}