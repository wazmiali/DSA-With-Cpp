// Minimum element in an array 
#include <iostream>
using namespace std;

int minElement(int arr[], int index, int n)
{
      if(index == n-1)
            return arr[index];

      return min(arr[index], minElement(arr,index+1,n));

}

int main()
{
      int arr[] = {3, 7, 6, 2, 8};

      cout<<minElement(arr,0,5);

      return 0;
}
