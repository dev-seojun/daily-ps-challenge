#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, v;
  cin >> a >> b >> v;

  double dis = a - b;
  double last_day = v - a;

  int count = ceil(last_day / dis) + 1;

  cout << count << "\n";

  return 0;
}