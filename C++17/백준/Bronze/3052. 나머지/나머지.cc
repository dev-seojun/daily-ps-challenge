#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> remain(10);

  for (int i = 0; i < 10; i++) {
    int a;
    cin >> a;

    remain[i] = a % 42;
  }

  unordered_set<int> result(remain.begin(), remain.end());
  cout << result.size() << "\n";

  return 0;
}