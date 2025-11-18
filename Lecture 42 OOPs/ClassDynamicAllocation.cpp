#include <iostream>
using namespace std;

class Hero
{

      // properties
      // char name[100];
      // int health;
      // char level;

private:
      int health;

public:
      char level;

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

      // static allocation
      Hero a;
      a.setHealth(80);
      a.setLevel('B');
      cout << "level is " << a.level << endl;
      cout << "health is " << a.getHealth() << endl;

      // dynamically allocation

      Hero *b = new Hero;
      b->setLevel('A');
      b->setHealth(70);
      cout << "level is: " << (*b).level << endl;
      cout << "health is: " << (*b).getHealth() << endl;

      cout << "level is: " << b->level << endl;
      cout << "health is: " << b->getHealth() << endl;

      return 0;
}