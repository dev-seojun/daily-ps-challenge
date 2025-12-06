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

  int v;
  int count = 0;

  cin >> v;
  for (int number : numbers) {
    if (number == v) count++;
  }

  cout << count << "\n";

  return 0;
}