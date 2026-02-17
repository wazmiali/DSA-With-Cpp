// Kadane's Algorithm  Maximum Subarray Sum
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maximumSubArraySum(int arr[], int n)
{
      int maxSum = INT_MIN;
      int currSum = 0;

      for (int i = 0; i < n - 1; i++)
      {
            currSum += arr[i];
            if (currSum > maxSum)
            {
                  maxSum = currSum;
            }
            if (currSum < 0)
            {
                  currSum = 0;
            }
      }
      return maxSum;
}

int main()
{
      int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
      int n = sizeof(arr) / sizeof(arr[0]);

      cout << "Maximum Subarray Sum = " << maximumSubArraySum(arr, n);

      return 0;
}
