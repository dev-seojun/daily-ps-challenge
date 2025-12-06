#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> basket(n);
  for (int i = 0; i < n; i++) {
    basket[i] = i + 1;
  }

  for (int q = 0; q < m; q++) {
    int i, j;
    cin >> i >> j;

    reverse(basket.begin() + (i-1), basket.begin() + j);
  }

  for (int ball : basket) {
    cout << ball << " ";
  }

  return 0;
}