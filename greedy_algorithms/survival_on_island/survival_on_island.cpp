// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int minimumDays(int S, int N, int M) {
    // code here
    int remainFood = 0;
    int days = 1;
    for (int i = 0; i < S; i++) {
      if (days % 7 != 0) {
        remainFood += N;
      }
      if (remainFood < M) {
        return -1;
      }
      remainFood -= M;
      days++;
    }
    double total = M * S;
    days = ceil(total / N);
    return days;

    /*
    * N < M Condition is for checking if is daily max supply suffcient for daily
    need or not.

    * ((N - M) * 6 < M && S > 6) Condition is for checking that if is the
    remaining food from other days sufficient for sunday or not and sunday is
    occuring or not.
    */

    // if (((N - M) * 6 < M && S > 6) || N < M) {
    //   return -1;
    // }
    // double total = M * S;
    // int days = ceil(total / N);
    // return days;
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
    int S, N, M;
    cin >> S >> N >> M;

    Solution ob;
    cout << ob.minimumDays(S, N, M) << endl;
  }
  return 0;
} // } Driver Code Ends