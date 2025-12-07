#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int count = 0;

  for (int i = 0; i < n; i++) {
    string word; cin >> word;

    vector<bool> alpha(26, false);
    bool is_group_word = true;
    char prev_char = 'A';

    for (char w : word) {
      if (w != prev_char) {
        if (alpha[w - 'a']) {
          is_group_word = false;
          break;
        }
      }
      
      alpha[w - 'a'] = true;
      prev_char = w;
    }

    if (is_group_word) count++;
  }

  cout << count << "\n";

  return 0;
}