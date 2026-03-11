#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int m = haystack.size();
        int n = needle.size();

        for (int i = 0; i <= m - n; i++) {

            int j;
            for (j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }

            if (j == n) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    Solution sol;

    string haystack = "sadbutsad";
    string needle = "sad";

    int result = sol.strStr(haystack, needle);

    cout << "Index: " << result << endl;

    return 0;
}