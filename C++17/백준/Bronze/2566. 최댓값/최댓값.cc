#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> A(9, vector<int>(9));

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A[i][j];
    }
  }

  int max = A[0][0], row = 1, col = 1;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (A[i][j] > max) {
        max = A[i][j];
        row = i + 1;
        col = j + 1;
      }
    }
  }

  cout << max << "\n" << row << " " << col << "\n";

  return 0;
}