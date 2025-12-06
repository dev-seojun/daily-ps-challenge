#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<double> score(n);
  for (int i = 0; i < n; i++) {
    cin >> score[i];
  }

  auto max = max_element(score.begin(), score.end());
  double max_value = *max;
  double total = 0;

  for (double s : score) {
    s = (s / max_value) * 100;
    total += s;
  }

  cout << total / n << "\n";

  return 0;
}