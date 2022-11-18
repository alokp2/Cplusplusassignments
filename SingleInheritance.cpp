#include <iostream>
using namespace std;

class cricketer {
  int total_runs;
  int Average_runs;
  int best_performance;

public:
  void input_data() {
    cout << "Enter the batsman total runs: ";
    cin >> total_runs;
    cout << "\nEnter the batsman Average runs: ";
    cin >> Average_runs;
    cout << "\nEnter the batsman best_performance: ";
    cin >> best_performance;
  }
  int calculate_average_runs();

  void display() {
    cout << "Total_runs by the batsman: " << total_runs << endl
         << "Average runs by batsman: " << Average_runs << endl
         << "The best_performance by the batsman: " << best_performance << endl;
  }
};
class batsman : public cricketer {};
int main() {
  batsman c;
  c.input_data();
  c.display();
}