// { Driver Code Starts
#include <bits/stdc++.h>
#include <climits>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  // arr: input array
  // n: size of array
  // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
  // with O(1) extra space.
  void arrange(long long arr[], int n) {
    // Your code here

    long long big_num = (1e7) + 1; // big_num = 10000001

    // encoding 2 intergers in one
    // encoded_num = big_num * 0ld_num + new_num
    for (long long i = 0; i < n; i++) {
      arr[i] = big_num * arr[i];
    }
    for (long long i = 0; i < n; i++) {
      arr[i] += arr[arr[i] / big_num] / big_num;
    }
    for (long long i = 0; i < n; i++) {
      arr[i] = arr[i] % big_num;
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
  // testcases
  cin >> t;
  while (t--) {

    int n;
    // size of array
    cin >> n;
    long long A[n];

    // adding elements to the array
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    Solution ob;
    // calling arrange() function
    ob.arrange(A, n);

    // printing the elements
    for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  return 0;
} // } Driver Code Ends