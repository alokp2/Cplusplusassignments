#include <iostream>
using namespace std;

class Bank {
  string name;
  int accountNumber;
  string typeAccount;
  float balance;

public:
  void getdeposit(int account) { 
     accountNumber = account; 
    }
  // void display() {
    
  // }
};
int main() {
  Bank User;
  string user1;
  string Type1;
  float deposit;
  float balance;

  cout << "Enter the name of the user:" << endl;
  cin >> user1;

  cout << "Enter the amount desposited in the Bank: " << endl;
  cin>>deposit;
  cout << "the user account type: " << endl;
  cin>>Type1;
  cout << "Enter the Balance: " << endl;
 cin>>balance;
  User.display();
}