#include <iostream>

using namespace std;

bool isPrime(long long n) {
  if (n < 2) return false;

	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x; cin >> x;

  for (int i = 0; i < x; i++) {
    long long n; cin >> n;
    while (!isPrime(n++));
    cout << n - 1 << "\n";
  }

  return 0;
}