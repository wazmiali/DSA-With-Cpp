// Virtual Function in C++
// A virtual function is a member function in the base class that you can override in a derived class. It is declared using the keyword 'virtual' in the base class. When you use a pointer or reference to a base class to call a virtual function, the version of the function that gets called is determined by the type of the object being pointed to, not the type of the pointer or reference. This is known as dynamic dispatch or runtime polymorphism.

#include<bits/stdc++.h>
using namespace std;

class Base
{
public:
      virtual void display()
      {
            cout << "Base class display function" << endl;
      }
};

class Derived : public Base
{     
public:
      void display()
      {
            cout << "Derived class display function" << endl;
      }
};    

int main()
{
      Base *ptr;
      Derived d;

      ptr = &d;

      ptr->display(); // Base class display function
}
