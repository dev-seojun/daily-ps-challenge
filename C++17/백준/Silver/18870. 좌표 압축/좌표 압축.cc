#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<long long> x(n);

  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  vector<long long> y = x;

  sort(x.begin(), x.end());
  x.erase(unique(x.begin(), x.end()), x.end());

  for (long long& i : y) {
    int index = lower_bound(x.begin(), x.end(), i) - x.begin();
    i = index;
  }

  for (long long num : y) {
    cout << num << " ";
  }

  cout << "\n";

  return 0;
}