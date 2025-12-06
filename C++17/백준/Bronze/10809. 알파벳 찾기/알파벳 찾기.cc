#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  vector<int> alpha(26, -1);

  for (int i = 0; i < s.size(); i++) {
    if (alpha[s[i] - 'a'] != -1) continue; 
    alpha[s[i] - 'a'] = i;
  }

  for (int i = 0; i < 26; i++) { 
    cout << alpha[i] << " ";
  }
  
  return 0;
}