#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution
{
public:
      int lengthOfLongestSubstring(string s)
      {

            unordered_set<char> seen;
            int left = 0, maxLen = 0;

            for (int i = 0; i < s.length(); i++)
            {
                  while (seen.count(s[i]))
                  {
                        seen.erase(s[left]);
                        left++;
                  }
                  seen.insert(s[i]);
                  maxLen = max(maxLen, i - left + 1);
            }
            return maxLen;
      }
};

int main()
{

      Solution sol;

      string s = "abcabcbb";

      int result = sol.lengthOfLongestSubstring(s);

      cout<<" Longest Substring Without Repeating Characters: "<<result<<endl;
      return 0;
}