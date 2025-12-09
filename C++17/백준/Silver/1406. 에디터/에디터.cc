#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string init_str;
  cin >> init_str;

  list<char> editor(init_str.begin(), init_str.end());
  list<char>::iterator cursor = editor.end();

  int M;
  cin >> M;

  while (M--) {
    char cmd;
    cin >> cmd;

    if (cmd == 'L') {
      if (cursor != editor.begin()) {
        cursor--;
      }
    }
    else if (cmd == 'D') {
      if (cursor != editor.end()) {
        cursor++;
      }
    }
    else if (cmd == 'B') {
      if (cursor != editor.begin()) {
        cursor = editor.erase(prev(cursor));
      }
    }
    else if (cmd == 'P') {
      char x;
      cin >> x;
      
      editor.insert(cursor, x);
    }
  }

  for (char c : editor) {
    cout << c;
  }
  cout << "\n";

  return 0;
}