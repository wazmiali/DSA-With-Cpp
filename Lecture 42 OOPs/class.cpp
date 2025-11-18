// Use a separate file for the class, include that file in another file, and link both files together. Class.cpp and Hero.cpp both add files

#include <iostream>
// ------------------
#include "Hero.cpp"
// ------------------
using namespace std;

int main()
{

      // creation of object
      Hero ramesh;

      cout << "Ramesh health is: " << ramesh.getHealth() << endl;

      // ramesh.health = 90;
      // use setter
      ramesh.setHealth(90);
      ramesh.level = 'A';

      cout << "Health is: " << ramesh.getHealth() << endl;
      cout << "Level is: " << ramesh.level << endl;

      return 0;
}