#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string input;
  getline(cin, input);

  stringstream s(input);
  int count = 0; string word;

  while (s >> word) {
    count++;
  }

  cout << count << "\n";
  
  return 0;
}