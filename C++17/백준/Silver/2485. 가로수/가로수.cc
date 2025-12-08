#include <iostream>
#include <vector>
#include <numeric> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> x(n);
  vector<int> y(n-1);

  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < n-1; i++) {
    y[i] = x[i+1] - x[i];
  }

  int g = y[0];
  if (y.empty()) {
    g = 0;
  }

  for (size_t i = 1; i < y.size(); ++i) {
    g = gcd(g, y[i]);
    if (g == 1) {
      g = 1;
    }
  }

  int dis = 0;
  for (int l : y) {
    dis += l / g - 1;
  }

  cout << dis << "\n";

  return 0;
}