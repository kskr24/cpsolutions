#include <iostream>

using namespace std;
const int maxp = 2000, n = 10000;
int primes[maxp], total = 0;

bool is_prime(int i) {
  for (int j = 0; j < total; j++) {
    if (i % primes[j] == 0)
      return false;
  }
  return true;
}

int main() {
  // get all primes

  for (int i = 2; i <= n; i++) {
    if (is_prime(i))
      primes[total++] = i;
  }
  primes[total] = n + 1;

  int m;
  cin >> m;

  while (m) {
    int ans = 0;
    for (int i = 0; m >= primes[i]; i++) {
      int sum = 0;
      for (int j = i; j < total && sum < m; j++) {
        sum += primes[j];
      }
      if (m == sum)
        ans++;
    }
    cout << ans << "\n";
    cin >> m;
  }
}
