// Static Data Member
// Static member functions

#include <bits/stdc++.h>
using namespace std;

class Customer
{
      string name;
      int account_number, balance;
      static int total_customer;

      static int total_balance;
      ;

public:
      Customer(string name, int account_number, int balance)
      {

            this->name = name;
            this->account_number = account_number;
            this->balance = balance;
            total_customer++;
            total_balance += balance;
      }

      static void acceStatic()
      {

            cout << "Total number of customer: " << total_customer << endl;
            cout << "Total Balance: " << total_balance << endl;
      }

      void deposit(int amount)
      {
            if (amount > 0)
            {
                  balance += amount;
                  total_balance += amount;
            }
      }

      void withdraw(int amount)
      {
            if (amount <= balance && amount > 0)
            {
                  balance -= amount;
                  total_balance -= amount;
            }
      }

      void display()
      {
            cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
      }

      void display_total()
      {

            cout << total_customer << endl;
      }
};

// Use a static data member outside the class using scope resolution operation.
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{

      Customer A1("Rohit", 1, 1000);
      Customer A2("Mohit", 2, 1800);
      Customer A3("Mohan", 3, 2000);
      Customer::acceStatic();
      // A1.display_total();

      A1.deposit(800);
      A2.withdraw(500);
      Customer::acceStatic();
}