// Constructor / Parameterized Constructor
#include <iostream>
using namespace std;

class Hero
{
private:
      int health;

public:
      char level;

      // Constructor
      Hero()
      {
            cout << "Constructor Called " << endl;
      }

      // Parameterized Constructor
      // Also use this keyword

      Hero(int health)
      {
            this->health = health;
      }

      Hero(int health, char level)
      {
            this->level = level;
            this->health = health;
      }

      void print()
      {
            cout << level << endl;
      }

      int getHealth()
      {
            return health;
      }

      int getLevel()
      {
            return level;
      }

      int setHealth(int h)
      {
            health = h;
      }

      int setLevel(char ch)
      {
            level = ch;
      }
};

int main()
{
      // Object creation statically
      Hero ramesh(10);
      cout << "Address of ramesh is: " << &ramesh << endl;

      // ramesh.getHealth();
      ramesh.print();

      // Dynamically
      Hero *h = new Hero(11);
      h->print();

      Hero temp(22, 'B');
      temp.print();

      return 0;

}
