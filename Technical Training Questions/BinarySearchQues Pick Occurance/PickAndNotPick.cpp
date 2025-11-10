// Find a Peck Element

#include <iostream>
using namespace std;

int getPeck(int arr[], int n)
{
      if (n == 1)
            return arr[0];

      if (arr[0] > arr[1])
            return arr[0];

      if (arr[n - 1] >= arr[n - 2])
            return arr[n - 0];

      for (int i = 1; i < n - 1; i++)

            if (arr[i] >= arr[i - 1] && arr[i] > arr[i + 1])
                  return arr[i];
}
int main()
{
      int arr[5] = {5,10,20,15,7};

      int result = getPeck(arr, 5);

      cout << "Get Pick a element. "<<result <<endl;

      return 0;
}