#include<bits/stdc++.h>
using namespace std;

class Customer 
{
      string name;
      int account_number;
      int balance;

      public:
// Default Constructor
      Customer ()
      {
            cout<<"Constructor Run"<<endl;

            name = "John";
            account_number = 12345;
            balance = 1000;

      }
// Parameterized Constructor

      // Customer(string name, int account_number, int balance){

      //       this->name = name;
      //       this->account_number = account_number;
      //       this->balance = balance;
      // }

      // Constructor overloading
      Customer (string a, int b){
            name = a;
            account_number = b;
            balance = 50;
      }

// Inline constructor 
     inline Customer(string a, int b, int c): name(a), account_number(b), balance(c)
     {
            
      }

// Copy Constructor
      void display ()
      {
           cout<<name<<" "<<account_number<<" "<<balance<<endl;
      }
      
};

int main() {

      Customer A1;
      Customer A2("Alice", 67890, 2000);
      Customer A3("Anil", 50, 200);
      A1.display();
      A2.display();
      A3.display();
      

}