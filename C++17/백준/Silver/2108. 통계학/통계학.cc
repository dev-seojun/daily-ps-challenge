#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> numbers(n);
  int freq[8001] = {0}; 
  int max_freq = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    numbers[i] = num;
    
    int index = num + 4000;
    freq[index]++;

    if (freq[index] > max_freq) {
      max_freq = freq[index];
    }
  }

  double sum = 0;
  for (int num : numbers) {
    sum += num;
  }

  cout << floor((sum / numbers.size()) + 0.5) << "\n";

  sort(numbers.begin(), numbers.end());
  int middle = (n - 1) / 2;

  if (n == 1) {
    cout << numbers[0] << "\n";
  }

  else {
    cout << numbers[middle] << "\n";
  }

  int mode = 0;
  int count = 0;

  for (int i = 0; i <= 8000; i++) {
    if (freq[i] == max_freq) {
      mode = i - 4000; 
      count++;

      if (count == 2) {
        break; 
      }
    }
  }

  cout << mode << "\n";
  int max = numbers[0];
  int min = numbers[0];

  for (int num : numbers) {
    if (num > max) {
      max = num;
    }

    if (num < min) {
      min = num;
    }
  }

  cout << max - min << "\n";

  return 0;
}