// Count 1st In a Sorted Binary Array
#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{

      int low = 0, heigh = n - 1;
      while (low <= heigh)
      {
            int mid = (low + heigh) / 2;
            if (arr[mid] == 0)
                  low = mid + 1;
            else
            {
                  if (mid == 0 || arr[mid - 1] != arr[mid])
                        return (n - mid);
                  else
                        heigh = mid - 1;
            }
      }
      return 0;
}

int main()
{

      int arr[7] = {0, 0, 1, 1, 1, 1, 1};

      int result = countOnes(arr, 7);

      cout << "Count of 1's = " << result << endl;

      return 0;
}
