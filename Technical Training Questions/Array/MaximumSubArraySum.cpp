// Maximum Subarray Sum (Brute Force)
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maximumSubarraySum(int arr[], int n)
{
      int maxSum = INT_MIN;

      for (int i = 0; i < n; i++)
      {
            int currSum = 0;

            for (int j = i; j < n; j++)
            {
                  currSum += arr[j]; 

                  if (currSum > maxSum)
                  {
                        maxSum = currSum;
                  }
            }
      }
      return maxSum;
}

int main()
{
      int arr[] = {3, 0, 1, 2, 5};
      int n = sizeof(arr) / sizeof(arr[0]);

      cout << "Maximum Subarray Sum = " << maximumSubarraySum(arr, n);

      return 0;
}
