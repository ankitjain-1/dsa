// { Driver Code Starts
// Initial template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int minimumStep(int n) {
    // complete the function here
    int num = n;
    int steps = 0;
    while (num >= 3) {
      int rem = num % 3;
      num -= rem;
      steps += rem;
      num /= 3;
      steps += 1;
    }
    steps += num - 1;
    return steps;
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution ob;
    cout << ob.minimumStep(n) << endl;
  }
  return 0;
}

// } Driver Code Ends
