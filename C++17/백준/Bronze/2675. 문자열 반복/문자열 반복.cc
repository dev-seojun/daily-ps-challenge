#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int r;
    string s;
    cin >> r >> s;

    for (int j = 0; j < s.size(); j++) {
      for (int k = 0; k < r; k++) {
        cout << s[j];
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}