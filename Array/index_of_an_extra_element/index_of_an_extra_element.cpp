// { Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  int findExtra(int a[], int b[], int n) {
    // add code here.
    int first_sum = 0;
    int second_sum = 0;
    for (int i = 0; i < n; i++) {
      first_sum += a[i];
    }
    for (int i = 0; i < n - 1; i++) {
      second_sum += b[i];
    }
    int num = first_sum - second_sum;
    int index = lower_bound(a, a + n, num) - a;
    return index;
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
} // } Driver Code Ends