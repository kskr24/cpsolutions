#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long n, k;
    cin >> n >> k;
    if ((n % 2) == 0 || (n ^ k) == 0) {
      cout << "YES\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}