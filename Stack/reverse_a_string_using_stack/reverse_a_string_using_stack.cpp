// { Driver Code Starts
#include <bits/stdc++.h>
#include <stack>
using namespace std;
char *reverse(char *str, int len);
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  long long int t;
  cin >> t;
  while (t--) {
    char str[10000];
    cin >> str;
    long long int len = strlen(str);
    char *ch = reverse(str, len);
    cout << ch;
    cout << endl;
  }
  return 0;
}

// } Driver Code Ends

// return the address of the string
char *reverse(char *S, int len) {
  // code here
  stack<int> st;
  for (int i = 0; i < len; i++) {
    char item = S[i];
    st.push(item);
  }
  char *ans = new char[len];
  int i = 0;
  while (!st.empty()) {
    ans[i++] = st.top();
    st.pop();
  }
  return ans;
}
