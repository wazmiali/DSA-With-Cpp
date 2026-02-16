// Left Rotate an Array by D
#include <iostream>
using namespace std;

void LeftRotateOne(int arr[], int n)
{
      int temp = arr[0];
      for (int i = 1; i < n; i++)
            arr[i - 1] = arr[i];
      arr[n - 1] = temp;
}

void LeftRotate(int arr[], int n, int d)
{
      d = d % n;

      for (int i = 0; i < d; i++)
      {
            LeftRotateOne(arr, n);
      }
}

int main()
{
      int arr[] = {1, 2, 3, 4, 5};
      int n = 5;
      int d = 2;

      LeftRotate(arr, n, d);

      for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

      return 0;
}
