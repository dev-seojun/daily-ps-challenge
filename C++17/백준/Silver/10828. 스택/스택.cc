#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; 
  cin >> n;

  stack<int> stacks;

  for (int i = 0; i < n; i++) {
    string cmd; 
    cin >> cmd;

    if (cmd == "push") {
      int x;
      cin >> x;

      stacks.push(x);
    }

    else if (cmd == "top") {
      if (stacks.empty()) {
        cout << -1 << "\n";
      }

      else {
        cout << stacks.top() << "\n";
      }
    }

    else if (cmd == "pop") {
      if (stacks.empty()) {
        cout << -1 << "\n";
      }

      else {
        cout << stacks.top() << "\n";
        stacks.pop();
      }
    }

    else if (cmd == "size") {
      cout << stacks.size() << "\n";
    }

    else if (cmd == "empty") {
      cout << (stacks.empty() ? 1 : 0) << "\n";
    }
  }

  return 0;
}