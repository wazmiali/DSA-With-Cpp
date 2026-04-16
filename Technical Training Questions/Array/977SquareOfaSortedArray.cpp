#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
      vector<int> sortedSquares(vector<int> &A)
      {
            vector<int> res(A.size());
            int l = 0, r = A.size() - 1;
            for (int k = A.size() - 1; k >= 0; k--)
            {
                  if (abs(A[r]) > abs(A[l]))
                        res[k] = A[r] * A[r--];
                  else
                        res[k] = A[l] * A[l++];
            }
            return res;
      }
};

int main()
{
      Solution sol;

      vector<int> A = {-4, -1, 0, 3, 10};

      vector<int> result = sol.sortedSquares(A);

      cout << "Squares of a Sorted Array: ";

      for (int x : result)
      {
            cout << x << " ";
      }
      cout<<endl;

      return 0;
}