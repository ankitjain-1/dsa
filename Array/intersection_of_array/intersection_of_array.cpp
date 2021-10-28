#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

vector<int> get_intersection(int *A, int n, int *B, int m) {
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++) {
    if (umap[A[i]] == 0)
      umap[A[i]] = umap[A[i]] + 1;
  }

  for (int i = 0; i < m; i++) {
    if (umap[B[i]] == 1)
      umap[B[i]] = umap[B[i]] + 1;
  }

  vector<int> intersection;
  for (auto iter = umap.begin(); iter != umap.end(); iter++) {
    // cout << iter->first << " -> " << iter->second << "\n";
    if (iter->second == 2) {
      intersection.push_back(iter->first);
    }
  }
  return intersection;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n, m;
  cin >> n >> m;
  int A[n], B[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }
  vector<int> intersection = get_intersection(A, n, B, m);
  for (auto item : intersection) {
    cout << item << " ";
  }
  cout << "\n";
  return 0;
}