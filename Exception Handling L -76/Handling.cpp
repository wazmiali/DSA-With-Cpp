#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a, b;
      cin >> a >> b;

      try
      {

            if (b == 0)
                  throw "Division by 0 is not possible";
            int c = a / b;

            cout << c << endl;
      }
      catch (const char *e)
      {
            cout << "Exception Occurred: " << e << endl;
      }
}