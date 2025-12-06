#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;

    cout << *(s.begin()) << *(s.end() - 1) << "\n";
  }

  return 0;
}