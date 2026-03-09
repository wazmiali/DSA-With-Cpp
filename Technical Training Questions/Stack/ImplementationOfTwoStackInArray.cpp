#include <iostream>
using namespace std;

class TwoStacks
{
      int *arr;
      int cap, top1, top2;

public:
      TwoStacks(int n)
      {
            cap = n;
            top1 = -1;
            top2 = n;
            arr = new int[n];
      }

      bool push1(int x)
      {
            if (top1 < top2 - 1)
            {
                  top1++;
                  arr[top1] = x;
                  return true;
            }
            return false; // Stack Overflow
      }

      bool push2(int x)
      {
            if (top1 < top2 - 1)
            {
                  top2--;
                  arr[top2] = x;
                  return true;
            }
            return false; // Stack Overflow
      }
      int pop1()
      {
            if (top1 >= 0)
            {
                  int x = arr[top1];
                  top1--;
                  return x;
            }
            return -1; // Stack Underflow
      }

      int pop2()
      {
            if (top2 < cap)
            {
                  int x = arr[top2];
                  top2++;
                  return x;
            }
            return -1; // Stack Underflow
      }
      int size1()
      {
            return (top1 + 1);
      }

      int size2()
      {
            return (cap - top2);
      }
      ~TwoStacks()
      {
            delete[] arr; // Free allocated memory
      }
};

int main()
{
      TwoStacks ts(5); // Create two stacks in an array of size 5
      // Pushing elements into Stack 1
      ts.push1(10);
      ts.push1(20);

      // Pushing elements into Stack 2
      ts.push2(30);
      ts.push2(40);
      // Popping from Stack 1
      cout << "Popped from Stack 1: " << ts.pop1() << endl; // Should print 20
      // Popping from Stack 2
      cout << "Popped from Stack 2: " << ts.pop2() << endl; // Should print 40
      cout << "Size of Stack 1: " << ts.size1() << endl;    // Should print 1
      cout << "Size of Stack 2: " << ts.size2() << endl;    // Should print 1
      return 0;
}
