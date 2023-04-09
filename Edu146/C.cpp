#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
  cin >> t;
  while (t--) {
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    vector<pair<int, int>> r(n);
    for (int i = 0; i < n; i++) {
      cin >> r[i].first;
      r[i].second = i + 1;
    }
    sort(r.begin(), r.end());
    reverse(r.begin(), r.end());
    vector<int> a, b;
    int time_a = s1, time_b = s2;
    for (int i = 0; i < n; i++) {
      time_a = (a.size() + 1) * s1;
      time_b = (b.size() + 1) * s2;
      if (time_a <= time_b) {
        a.push_back(r[i].second);
      } else {
        b.push_back(r[i].second);
      }
    }

    cout << a.size() << " ";
    for (auto x : a) {
      cout << x << " ";
    }
    cout << std::endl;
    cout << b.size() << " ";
    for (auto x : b) {
      cout << x << " ";
    }
    cout << std::endl;
  }
}