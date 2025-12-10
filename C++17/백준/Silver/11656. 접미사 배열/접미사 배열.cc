#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; 
  cin >> s;

  vector<string> t;
  for (int i = 0; i < s.size(); i++) {
    t.push_back(s.substr(i, s.size()));
  }

  sort(t.begin(), t.end());

  for (string v : t) {
    cout << v << "\n";
  }

  return 0;
}