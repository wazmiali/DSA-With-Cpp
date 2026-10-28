#include <bits/stdc++.h>
using namespace std;

class Student {
private:
      string name;
      int marks;

public:
      Student(string n, int m)
      {
            name = n;
            marks = m;
      }
void Display()
{
      cout << "Name: " << name << endl;
      cout << "Marks: " << marks << endl;
}

void calculateResult()
{
      if (marks >= 40)
            cout << "Result: Pass" << endl;
      else
            cout << "Result: Fail" << endl;
}
};

int main()
{
      Student s1("John", 85);
      Student s2("Aman", 32);

      s1.Display();
      s1.calculateResult();

      cout << endl;

      s2.Display();
      s2.calculateResult();

      return 0;

}