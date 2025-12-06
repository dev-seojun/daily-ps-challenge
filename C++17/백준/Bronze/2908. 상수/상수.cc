#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  cin >> a >> b;

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  cout << (stoi(a) < stoi(b) ? b : a) << "\n";
  
  return 0;
}