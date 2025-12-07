#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> chess = {1, 1, 2, 2, 2, 8};

  vector<int> find(6);
  for (int i = 0; i < 6; i ++) {
    cin >> find[i];
  }

  for (int i = 0; i < 6; i++) {
    cout << chess[i] - find[i] << " ";
  }

  return 0;
}