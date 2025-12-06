#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> numbers(n);
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  int min = numbers[0], max = numbers[0];
  for (int num : numbers) {
    if (num < min) min = num;
    if (num > max) max = num;
  }

  cout << min << " " << max << "\n";

  return 0;
}