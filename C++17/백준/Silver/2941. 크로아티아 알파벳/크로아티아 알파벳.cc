#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<string> c_alpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  string word; cin >> word;
  string temp = word;

  for (string c : c_alpha) {
    for (int i = 0; i < word.size(); i++) {
      if (word.substr(i, c.size()) == c && (temp.find(c) != string::npos)) {
        word.replace(i, c.size(), "a");
      }
    }
  }

  cout << word.size() << "\n";

  return 0;
}