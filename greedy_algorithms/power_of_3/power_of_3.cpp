#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
// code
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = (log(n) / log(3)) + 1;
    cout << ans << "\n";
  }
  return 0;
}