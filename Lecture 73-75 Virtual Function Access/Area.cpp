<<<<<<< HEAD
// Function overloading Polymorphism
#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
      int calculateArea(int r)
      {
            return 3.14 * r * r;
      }

      int calculateArea(int l, int b)
      {
            return l * b;
      }
};

int
main()
{
      Area A1, A2;
      cout << A1.calculateArea(4) << endl;
      cout << A2.calculateArea(3,4) << endl;
=======
// Function overloading Polymorphism
#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
      int calculateArea(int r)
      {
            return 3.14 * r * r;
      }

      int calculateArea(int l, int b)
      {
            return l * b;
      }
};

int
main()
{
      Area A1, A2;
      cout << A1.calculateArea(4) << endl;
      cout << A2.calculateArea(3,4) << endl;
>>>>>>> 4079a21668804dbfe4d172d5875a755eb8be9820
}