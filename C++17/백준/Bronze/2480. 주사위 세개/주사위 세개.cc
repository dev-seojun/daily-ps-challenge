#include <algorithm>
#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  if (a == b && b == c) {
    std::cout << 10000 + a * 1000 << std::endl;
  }

  else if (a == b || b == c || c == a) {
    int temp;

    if (a == b) temp = a;
    else if (b == c) temp = b;
    else temp = c;

    std::cout << 1000 + temp * 100 << std::endl;;
  }

  else {
    int max = std::max({a, b, c});

    std::cout << max * 100 << std::endl;
  }

  return 0;
}