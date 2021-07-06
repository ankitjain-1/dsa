// { Driver Code Starts
#include <bits/stdc++.h>
#include <ios>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  // Function to return the minimum cost of connecting the ropes.
  long long minCost( long long arr[], long long n) {
    // Your code here
    long long cost = 0;

    priority_queue<long long, vector<long long>, greater<long long>> minh;
    for (long long i = 0; i < n ; i++) {
      minh.push(arr[i]);
    }
    for (long long i = 0; i < n - 1; i++) {
      long long first = minh.top();
      minh.pop();
      long long second = minh.top();
      minh.pop();
      long long sum = first + second;
      minh.push(sum);
      cost += sum;
    }
    return cost;
  }
};

// { Driver Code Starts.
long long minCost(long long arr[], long long n);
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long i, a[n];
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }
    Solution ob;
    cout << ob.minCost(a, n) << endl;
  }
  return 0;
}
// } Driver Code Ends