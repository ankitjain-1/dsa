// { Driver Code Starts
#include <bits/stdc++.h>
#include <string>
using namespace std;

// } Driver Code Ends
// Function to return Largest Number

class Solution {
public:
  // Function to return the largest possible number of n digits
  // with sum equal to given sum.
  string largestNumber(int n, int sum) {
    // Your code here
    // string ans = "";
    // for (int i = 0; i < n; i++) {
    //   if (sum >= 9) {
    //     ans += "9";
    //     sum -= 9;
    //   } else if (sum >= 8) {
    //     ans += "8";
    //     sum -= 8;
    //   } else if (sum >= 7) {
    //     ans += "7";
    //     sum -= 7;
    //   } else if (sum >= 6) {
    //     ans += "6";
    //     sum -= 6;
    //   } else if (sum >= 5) {
    //     ans += "5";
    //     sum -= 5;
    //   } else if (sum >= 4) {
    //     ans += "4";
    //     sum -= 4;
    //   } else if (sum >= 3) {
    //     ans += "3";
    //     sum -= 3;
    //   } else if (sum >= 2) {
    //     ans += "2";
    //     sum -= 2;
    //   } else if (sum >= 1) {
    //     ans += "1";
    //     sum -= 1;
    //   } else {
    //     ans += "0";
    //   }
    // }
    // if (sum != 0)
    //   return "-1";
    // return ans;
    string ans = "";
    for (int i = 0; i < n; i++) {
      if (sum > 9) {
        ans += "9";
        sum -= 9;
      } else {
        ans += to_string(sum);
        sum -= sum;
      }
    }
    if (sum != 0)
      return "-1";
    return ans;
  }
};

// { Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // taking testcases
  int t;
  cin >> t;

  while (t--) {
    // taking n and sum
    int n, sum;
    cin >> n >> sum;

    Solution obj;
    // function call
    cout << obj.largestNumber(n, sum) << endl;
  }
  return 0;
} // } Driver Code Ends