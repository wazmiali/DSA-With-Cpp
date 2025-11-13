// Check if two given String are isomorphic to each other
#include <iostream>
#include <string>
using namespace std;

bool areIsomorphic(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    if (n != m)
        return false;

    int m1[256] = {0};
    int m2[256] = {0};

    for (int i = 0; i < n; i++)
    {
        if (m1[s1[i]] == 0 && m2[s2[i]] == 0)
        {
            m1[s1[i]] = s2[i];
            m2[s2[i]] = s1[i];
        }
        else if (m1[s1[i]] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (areIsomorphic(str1, str2))
        cout << "Strings are isomorphic." << endl;
    else
        cout << "Strings are not isomorphic." << endl;

    return 0;
}
