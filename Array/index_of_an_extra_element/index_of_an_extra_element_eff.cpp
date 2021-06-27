// { Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  int findExtra(int a[], int b[], int n) {
    // add code here.
    int left = 0;
    int right = n;
    int mid = (left + right) / 2;
    int i = 0;
    while (left < right) {
      if (a[mid] == b[mid]) {
        left = mid + 1;
      } else {
        right = mid;
      }
      mid = (left + right) / 2;
    }
    return mid;
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
    int n;
    cin >> n;
    int a[n], b[n - 1];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
      cin >> b[i];
    }
    Solution obj;
    cout << obj.findExtra(a, b, n) << endl;
  }
} //

// Driver Code Ends