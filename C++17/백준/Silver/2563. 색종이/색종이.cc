#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> A(100, vector<int>(100, 0));

  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;

    for (int j = x; j < x+10; j++) {
      for (int k = y; k < y+10; k++) {
        A[j][k] = 1;
      }
    }
  }

  int result = 0;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      result += A[i][j];
    }
  }

  cout << result << "\n";

  return 0;
}