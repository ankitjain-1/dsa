// { Driver Code Starts
#include <bits/stdc++.h>
#include <queue>
#include <string>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  long long int minSum(int arr[], int n) {
    // Your code goes here
    priority_queue<long long int, vector<long long int>, greater<long long int>> minh;
    for (long long int i = 0; i < n; i++) {
      long long int item = arr[i];
      minh.push(item);
    }
    string first = "", second = "";
    bool flag = true;
    while (!minh.empty()) {
      if (flag) {
        first += to_string(minh.top());
      } else {
        second += to_string(minh.top());
      }
      minh.pop();
      flag = !flag;
    }
    long long int firstNum = 0;
    long long int secondNum = 0;

    for (int i = 0; i < first.length(); i++) {
      firstNum = firstNum * 10 + first[i] - '0';
    }

    for (int i = 0; i < second.length(); i++) {
      secondNum = secondNum * 10 + second[i] - '0';
    }

    long long int sum = firstNum + secondNum;

    // cout << "string " << first << ", num " << firstNum << "\n";
    // cout << "string " << second << ", num " << secondNum << "\n";

    return sum;
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
    int arr[n + 1];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution ob;
    cout << ob.minSum(arr, n) << endl;
  }
  return 0;
}
// } Driver Code Ends