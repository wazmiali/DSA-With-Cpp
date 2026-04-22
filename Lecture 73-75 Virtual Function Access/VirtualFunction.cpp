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