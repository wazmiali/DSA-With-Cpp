// Reverse Array
#include <iostream>
using namespace std;

void printArrayReverse(int arr[], int index, int n)
{
      if (index == n)
      {
            return;
      }

      printArrayReverse(arr, index + 1, n);
      cout << arr[index] << " ";
}
int main()
{
      int arr[] = {3, 7, 6, 2, 8};
      int n = sizeof(arr) / sizeof(arr[0]);

      printArrayReverse(arr, 0, 5);

      return 0;
}
