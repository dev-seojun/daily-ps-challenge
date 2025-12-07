#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<char>> A(5, vector<char>(15, ' '));
  for (int i = 0; i < 5; i++) {
    string word; cin >> word;
    for (int j = 0; j < word.size(); j++) {
      A[i][j] = word[j];
    }
  }

  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 5; j++) {
      if (A[j][i] == ' ') continue;
      cout << A[j][i];
    }
  }

  cout << "\n";

  return 0;
}