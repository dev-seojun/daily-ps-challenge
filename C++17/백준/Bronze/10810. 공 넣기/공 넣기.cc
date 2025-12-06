#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> basket(n);

  for (int temp = 0; temp < m; temp++) {
    int i, j, k;
    cin >> i >> j >> k;

    for (int l = i; l <= j; l++) {
      basket[l-1] = k;
    }
  }

  for (int ball : basket) {
    cout << ball << " ";
  }

  return 0;
}