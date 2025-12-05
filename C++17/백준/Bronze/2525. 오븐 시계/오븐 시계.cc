#include <iostream>

int main() {
  int h, m, C;
  std::cin >> h >> m >> C;

  if (m + C >= 60) {
    h += (m + C) / 60;
    m = (m + C) % 60;

    if (h >= 24) {
      h %= 24;
    }
  }

  else {
    m = m + C;
  }

  std::cout << h << " " << m << std::endl;

  return 0;
}