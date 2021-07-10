#include <bits/stdc++.h>

using namespace std;

// function prototypes
vector<int> nearlySortedAlgorithm(int *, int, int);

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // code
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    vector<int> ans = nearlySortedAlgorithm(arr, n, k);
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}

vector<int> nearlySortedAlgorithm(int *arr, int n, int k) {
  priority_queue<int, vector<int>, greater<int>> minh;
  vector<int> sortedArr;
  for (int i = 0; i < k; i++) {
    minh.push(arr[i]);
  }
  for (int i = k; i < n; i++) {
    sortedArr.push_back(minh.top());
    minh.pop();
    minh.push(arr[i]);
  }
  while (!minh.empty()) {
    sortedArr.push_back(minh.top());
    minh.pop();
  }
  return sortedArr;
}