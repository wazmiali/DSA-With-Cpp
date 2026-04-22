<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

// Pure Virtual Function (Abstract Class)
class Animal
{
public:
      virtual void speak() = 0; // Pure virtual function → must be overridden
};

// Derived class Dog
class Dog : public Animal
{
public:
      void speak() // overriding function
      {
            cout << "Dog class speak function" << endl;
      }
};

// Added missing class Cat
class Cat : public Animal
{
public:
      void speak()
      {
            cout << "Cat class speak function" << endl;
      }
};

// Added missing class Bat
class Bat : public Animal
{
public:
      void speak()
      {
            cout << "Bat class speak function" << endl;
      }
};

int main()
{
      Animal *ptr;             // base class pointer
      vector<Animal *> animal; // vector of base class pointers

      // storing different derived class objects
      animal.push_back(new Dog());
      animal.push_back(new Cat());
      animal.push_back(new Dog());
      animal.push_back(new Bat());

      // runtime polymorphism
      for (int i = 0; i < animal.size(); i++)
      {
            ptr = animal[i]; // base pointer pointing to derived object
            ptr->speak();    // calls respective class function
      }
}
=======
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
>>>>>>> 4079a21668804dbfe4d172d5875a755eb8be9820
