#include <iostream>

int main() {
  int h, m;
  std::cin >> h >> m;

  if (m >= 45) { 
    std::cout << h << " " << m - 45 << std::endl;
  }

  else {
    std::cout << (h != 0 ? h - 1 : 23) << " " << m + 15 << std::endl;
  }

  return 0;
}