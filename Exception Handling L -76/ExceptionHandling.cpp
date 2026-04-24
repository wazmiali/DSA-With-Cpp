// Exception handling is a mechanism to handle runtime errors in a controlled manner. It allows developers to write code that can gracefully handle errors and exceptions without crashing the program. In C++, exception handling is done using try, catch, and throw keywords.
// Exception handling
#include <bits/stdc++.h>
using namespace std;

class Customer
{
      string name;
      int balance, account_number;

public:
      Customer(string name, int balance, int account_number)
      {
            this->name = name;
            this->balance = balance;
            this->account_number = account_number;
      };

      void deposit(int amount)
      {
            if (amount > 0)
            {
                  balance += amount;
                  cout << amount << " is credited successfully" << endl;
            }

            else
            {
                  throw "amount should be greater then 0";
            }
      }

      // Withdraw
      void withdraw(int amount)
      {
            if (amount > 0 && amount <= balance)
            {
                  balance -= amount;
                  cout << amount << " is debited successfully" << endl;
            }

            else if (amount < 0)
            {
                  throw "amount should be greater then 0";
            }

            else
            {
                  throw "Your balance is low.";
            }
      }
};

int main()
{
      Customer C1("Rohit", 5000, 10);

      try
      {
            C1.deposit(100);
            C1.withdraw(6000);
            C1.deposit(100);
      }

      catch (const char *e)
      {
            cout << "Exception Occurred: " << e << endl;
      }
}
