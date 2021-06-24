// { Driver Code Starts
// C++ program to find number
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
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
    int arr[n + 1];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    cout << calculate(arr, n) << endl;
  }
  return 0;
}

// } Driver Code Ends

int getCombinations(int n) { return n * (n - 1) / 2; }

long long int calculate(int a[], int n) {
  sort(a, a + n);
  int count = 0;
  int currCount = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == a[i + 1]) {
      currCount++;
    } else {
      count += getCombinations(currCount + 1);
      currCount = 0;
    }
  }
  // cout << "curr " << currCount << "\n";
  return count;
}