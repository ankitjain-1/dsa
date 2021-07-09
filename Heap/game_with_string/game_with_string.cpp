// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <math.h>
#include <queue>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
  int minValue(string s, int k) {
    // code here
    unordered_map<char, int> umap;
    for (int i = 0; i < s.length(); i++) {
      char item = s[i];
      umap[item]++;
    }

    priority_queue<int> maxh;
    unordered_map<char, int>::iterator umap_iter;
    for (umap_iter = umap.begin(); umap_iter != umap.end(); umap_iter++) {
      maxh.push(umap_iter->second);
    }
    for (int i = 0; i < k; i++) {
      int top = maxh.top();
      maxh.pop();
      maxh.push(top - 1);
    }

    int val = 0;
    for (umap_iter = umap.begin(); umap_iter != umap.end(); umap_iter++) {
      val += pow(maxh.top(), 2);
      maxh.pop();
    }
    
    return val;
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
    string s;
    int k;
    cin >> s >> k;

    Solution ob;
    cout << ob.minValue(s, k) << "\n";
  }
  return 0;
} // } Driver Code Ends