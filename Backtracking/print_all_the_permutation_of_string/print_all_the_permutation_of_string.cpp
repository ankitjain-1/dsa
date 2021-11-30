#include <bits/stdc++.h>

using namespace std;

// function to swap to chars of string
void swap(char &x, char &y) {
  char temp = x;
  x = y;
  y = temp;
}

// recursive function to print all permutation
void permute(string st, int l, int r) {

  // if all characters are fixed then print the current permutation
  if (l == r) {
    cout << st << "\n";
    return;
  }

  // on every iteration swaping the current character with all chracters to its
  // right
  for (int i = l; i <= r; i++) {
    // swaping the current char with the i'th char
    swap(st[l], st[i]);

    // getting all the permutation at the current stage
    permute(st, l + 1, r);

    // swap again to go to previous state
    // this is actual backtracking step
    swap(st[l], st[i]); // Backtracking to previous step
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    string st;
    cin >> st;
    int len = st.length();
    permute(st, 0, len - 1);
    cout << "\n";
  }
}