#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<bool> tf(31, false);

  int id;
  for (int i = 0; i < 28; i++) {
    cin >> id;
    tf[id] = true;
  }

  for (int i = 1; i <= 30; i++) {
    if (tf[i] == false) {
      cout << i << "\n";
    }
  }

  return 0;
}