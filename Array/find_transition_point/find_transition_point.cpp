// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

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
    int a[n], i;
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << transitionPoint(a, n) << endl;
  }
  return 0;
} // } Driver Code Ends

int transitionPoint(int arr[], int n) {
  // code here
  int ind = -1;
  for (int i = 0; i < n; i++) {
    int item = arr[i];
    if (item == 0) {
      ind++;
    } else {
      return ind + 1;
    }
  }
  return -1;
}