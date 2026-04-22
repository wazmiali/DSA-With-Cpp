#include <bits/stdc++.h>
using namespace std;

class Human
{
      string Religion, color;

protected:
      string name;
      int age, weight;
};

class Student : public Human
{
private:
      int roll_number, fees;

public:
      Student(string name, int age, int weight, int roll_number, int fees)
      {
            this->name = name;
            this->age = age;
            this->weight = weight;
            this->roll_number = roll_number;
            this->fees = fees;
      }

      void display()
      {
            cout << name << ", Age is: " << age << ", Weight is: " << weight << ", Roll Number is: " << roll_number << ", and fees is: " << fees << endl;
      }
};

int main()
{

      Student A("Raj", 12, 400, 23, 200);
      A.display();
}
