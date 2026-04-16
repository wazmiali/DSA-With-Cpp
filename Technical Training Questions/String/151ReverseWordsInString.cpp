#include <iostream>
#include <algorithm>
#include <vector>
#include<sstream>
using namespace std;

class Solution
{
public:
      string reverseWords(string s)
      {
            vector<string> words;
            stringstream ss(s);
            string temp;

            while (ss >> temp)
                  words.push_back(temp);

            string ans;
            for (int i = words.size() - 1; i >= 0; --i)
            {
                  if (i != words.size() - 1)
                        ans += " ";
                  ans += words[i];
            }
            return ans;
      }
};

int main()
{

      Solution sol;

      string s = "the sky is blue";
      cout<<"Original String: the sky is blue "<<endl;

      string result = sol.reverseWords(s);

      cout<<"Reverse Words in a String: "<<result<<endl;

      return 0;
}