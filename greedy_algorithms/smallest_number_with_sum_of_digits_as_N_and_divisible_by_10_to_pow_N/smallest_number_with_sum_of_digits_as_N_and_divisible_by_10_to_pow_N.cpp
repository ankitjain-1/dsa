// { Driver Code Starts

#include <bits/stdc++.h>
#include <string>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  string digitsNum(int N) {
    // Code here.
    string ans = "";
    int sum = N;
    int remain = sum % 9;
    sum = sum - remain;
    if (remain != 0) {
      ans += to_string(remain);
    }
    while (sum > 0) {
      ans += "9";
      sum = sum - 9;
    }
    for (int i = 0; i < N; i++) {
      ans += "0";
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
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    Solution ob;
    string ans = ob.digitsNum(n);
    cout << ans << "\n";
  }
  return 0;
} // } Driver Code Ends