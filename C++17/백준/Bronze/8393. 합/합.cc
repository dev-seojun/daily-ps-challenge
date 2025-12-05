#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int result = n * (n + 1) / 2;
    std::cout << result << std::endl;

    return 0;
}