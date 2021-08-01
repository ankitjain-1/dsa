// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include <utility>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
  // Function to find majority element in the array
  // a: input array
  // size: size of input array

  int findCandidate(int a[], int size) {
    int maj_index = 0;
    int count = 1;
    for (int i = 1; i < size; i++) {
      if (a[maj_index] == a[i]) {
        count++;
      } else {
        count--;
      }
      if (count == 0) {
        maj_index = i;
        count = 1;
      }
    }
    return a[maj_index];
  }

  bool checkMajorityElement(int a[], int size, int cand) {
    int count = 0;
    for (int i = 0; i < size; i++) {
      if (a[i] == cand) {
        count++;
      }
    }
    if (count > size / 2) {
      return true;
    } else {
      return false;
    }
  }

  int majorityElement(int a[], int size) {
    // your code here
    int cand = findCandidate(a, size);
    // cout << "cand: " << cand << "\n";
    if (checkMajorityElement(a, size, cand)) {
      return cand;
    } else {
      return -1;
    }
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

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution obj;
    cout << obj.majorityElement(arr, n) << endl;
  }

  return 0;
}
// } Driver Code Ends