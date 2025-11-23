#include <iostream>
using namespace std;

class A
{
public:
      void say()
      {
            cout << " Love " << endl;
      }

      void say(string name)
      {

            cout << "Hai" << name << endl;
      }
};

int main()
{

      A obj;
      obj.say();

      return 0;
}