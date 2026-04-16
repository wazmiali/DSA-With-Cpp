#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
      string reverseVowels(string s)
      {

            unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int i = 0, j = s.size() - 1;

            while (i < j)
            {

                  if (!vowels.count(s[i]))
                        i++;
                  else if (!vowels.count(s[j]))
                        j--;
                  else
                  {
                        swap(s[i], s[j]);
                        i++;
                        j--;
                  }
            }

            return s;
      }
};

int main()
{

      Solution sol;

      string s = "IceCreAm";

      string result = sol.reverseVowels(s);

      cout<<"Reverse Vowels of a String: "<<result<<endl;

      return 0;
}