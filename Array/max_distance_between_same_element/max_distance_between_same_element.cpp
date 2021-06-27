// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  // your task is to complete this function
  int maxDistance(int arr[], int n) {
    unordered_map<int, int> umap;
    int max_dis = 0;
    for (int i = 0; i < n; i++) {
      if (umap.find(arr[i]) == umap.end()) {
        umap.insert({arr[i], i});
      } else {
        max_dis = max(max_dis, i - umap[arr[i]]);
      }
    }
    return max_dis;
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
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution ob;
    cout << ob.maxDistance(arr, n) << endl;
  }
  return 0;
} // } Driver Code Ends