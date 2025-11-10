// CountOccurrenceSortedArray.
#include <iostream>
using namespace std;

// Function to find first occurrence
int firstOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1; // search on left side
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            ans = mid;
            low = mid + 1; // search on right side
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// Function to count occurrences
int countOccurance(int arr[], int n, int x) {
    int first = firstOcc(arr, n, x);
    if (first == -1)
        return 0;
    int last = lastOcc(arr, n, x);
    return (last - first + 1);
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = 6;
    int x = 2;
    cout << "Count = " << countOccurance(arr, n, x);
    return 0;
}
