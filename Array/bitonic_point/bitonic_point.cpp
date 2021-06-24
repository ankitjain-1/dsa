// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
public:
  int findMaximum(int arr[], int n) {
    // code here
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
      int item = arr[i];
      if (item > max)
        max = item;
      else
        return max;
    }
    return arr[n - 1];
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
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.findMaximum(arr, n);
    cout << ans << "\n";
  }
  return 0;
}
// } Driver Code Ends