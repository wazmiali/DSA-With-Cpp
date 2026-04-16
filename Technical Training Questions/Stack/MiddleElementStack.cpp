#include <iostream>
using namespace std;

int main()
{
      
      TwoStacks ts(5);
      ts.push1(10);
      ts.push1(20);
      ts.push2(30);
      ts.push2(40);
      cout << "Popped from Stack 1: " << ts.pop1() << endl;
      cout << "Popped from Stack 2: " << ts.pop2() << endl;
      cout << "Size of Stack 1: " << ts.size1() << endl;
      cout << "Size of Stack 2: " << ts.size2() << endl;
      return 0;
}
