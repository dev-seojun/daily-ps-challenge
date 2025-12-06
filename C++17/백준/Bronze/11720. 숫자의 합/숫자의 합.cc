#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  string nums;
  cin >> n >> nums;

  long long result = 0;

  for (int i = 0; i < n; i++) {
    result += (nums[i] - '0');
  }

  cout << result << "\n";

  return 0;
}