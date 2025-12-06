#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> basket(n);
  int ball = 1;
  for (int i = 0; i < n; i++) {
    basket[i] = ball++;
  }

  for (int temp = 0; temp < m; temp++) {
    int i, j;
    cin >> i >> j;

    int ball = basket[i-1];

    basket[i-1] = basket[j-1];
    basket[j-1] = ball;
  }

  for (int ball : basket) {
    cout << ball << " ";
  }

  return 0;
}