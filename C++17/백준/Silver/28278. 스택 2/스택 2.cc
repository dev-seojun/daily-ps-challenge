#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> stack;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int cmd;
    cin >> cmd;

    if (cmd == 1) {
      int x;
      cin >> x;

      stack.push_back(x);
    }

    else if (cmd == 2) {
      if (stack.size() >= 1) {
        cout << stack.back() << "\n";
        stack.pop_back();
      }

      else {
        cout << -1 << "\n";
      }
    }

    else if (cmd == 3) {
      cout << stack.size() << "\n";
    }

    else if (cmd == 4) {
      cout << (stack.size() == 0 ? 1 : 0) << "\n";
    }

    else {
      if (stack.size() >= 1) {
        cout << stack.back() << "\n";
      }

      else {
        cout << -1 << "\n";
      }
    }
  }

  return 0;
}