#include <iostream>

int main() {
  int X, N;
  std::cin >> X >> N;

  int r = 0;

  for (int i = 0; i < N; i++) {
    int a, b;
    std::cin >> a >> b;

    r += a * b;
  }

  std::cout << (r == X ? "Yes" : "No") << std::endl;

  return 0;
}