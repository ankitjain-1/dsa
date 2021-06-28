// { Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  // Function to return k largest elements from an array.
  vector<int> kLargest(int arr[], int n, int k) {
    // code here
    vector<int> nums;

    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < n; i++) {
      int item = arr[i];
      minh.push(item);
      if (minh.size() > k) {
        minh.pop();
      }
    }
    for (int i = 0; i < k; i++) {
      nums.insert(nums.begin(), minh.top());
      minh.pop();
    }
    return nums;
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
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution ob;
    vector<int> result = ob.kLargest(arr, n, k);
    for (int i = 0; i < result.size(); ++i)
      cout << result[i] << " ";
    cout << endl;
  }
  return 0;
}
// } Driver Code Ends