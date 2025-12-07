#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double avg_score = 0, credit_score = 0;

  for (int i = 0; i < 20; i++) {
    string class_name, rank;
    double credit;
    cin >> class_name >> credit >> rank;

    if (rank == "A+") avg_score += credit * 4.5;
    else if (rank == "A0") avg_score += credit * 4.0;
    else if (rank == "B+") avg_score += credit * 3.5;
    else if (rank == "B0") avg_score += credit * 3.0;
    else if (rank == "C+") avg_score += credit * 2.5;
    else if (rank == "C0") avg_score += credit * 2.0;
    else if (rank == "D+") avg_score += credit * 1.5;
    else if (rank == "D0") avg_score += credit * 1.0;
    else if (rank == "F") avg_score += credit * 0.0;
    else continue;

    if (rank != "P") credit_score += credit;
  }

  cout << fixed << setprecision(6) << avg_score / credit_score << "\n";

  return 0;
}