#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string word; cin >> word;
  transform(word.begin(), word.end(), word.begin(), ::toupper);
  
  int max_freq = 0;
  char result_char = '?';
  bool is_dup = false;

  vector<int> alpha(26, 0);
  for (char w : word) {
    alpha[w - 'A']++;
  }

  for (int i = 0; i < 26; i++) {
    if (alpha[i] == max_freq) { 
      max_freq = alpha[i];
      result_char = '?';
      is_dup = true;
    }

    if (alpha[i] > max_freq) {
      max_freq = alpha[i];
      result_char = i + 'A';
      is_dup = false;
    }
  }

  cout << result_char << "\n";

  return 0;
}