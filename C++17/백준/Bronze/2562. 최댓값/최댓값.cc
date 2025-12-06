#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> numbers(9);
  for (int i = 0; i < 9; i++) {
    cin >> numbers[i];
  }

  int index = 0, max = numbers[0];
  for (int i = 0; i < 9; i++) {
    if (numbers[i] > max) {
      max = numbers[i];
      index = i;
    }
  }

  cout << max << "\n" << index + 1 << "\n";

  return 0;
}