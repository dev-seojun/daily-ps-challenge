#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string word; cin >> word;
  string reverse_word = word;

  reverse(reverse_word.begin(), reverse_word.end());
  
  if (word == reverse_word) {
    cout << 1 << "\n";
  }

  else {
    cout << 0 << "\n";
  }

  return 0;
}