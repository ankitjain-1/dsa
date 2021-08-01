// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  // Function to find the next greater element for each element of the array.
  vector<long long> nextLargerElement(vector<long long> arr, int n) {
    // Your code here
    stack<long long> st;
    vector<long long> vec;
    for (int i = n - 1; i >= 0; i--) {
      if (st.empty()) {
        vec.push_back(-1);
      } else if (!st.empty() && st.top() > arr[i]) {
        vec.push_back(st.top());
      } else if (!st.empty() && st.top() <= arr[i]) {
        while (!(st.empty() || (st.top() > arr[i]))) {
          st.pop();
        }
        if (st.empty()) {
          vec.push_back(-1);
        } else if (st.top() > arr[i]) {
          vec.push_back(st.top());
        }
      }
      st.push(arr[i]);
    }
    reverse(vec.begin(), vec.end());
    return vec;
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
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    Solution obj;
    vector<long long> res = obj.nextLargerElement(arr, n);
    for (long long i : res)
      cout << i << " ";
    cout << endl;
  }
  return 0;
} // } Driver Code Ends