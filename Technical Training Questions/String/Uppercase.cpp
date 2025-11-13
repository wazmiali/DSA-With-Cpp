// Convert LowerCase to Upper Case 

#include <iostream>
using namespace std;

void convertToUpperCase(char ch[], int n)
{
      int index = 0;
      while (ch[index] != '\0')
      {
            // check if lower case then
            if (ch[index] >= 'a' && ch[index] <= 'z')
            {
                  ch[index] = ch[index] - 'a' + 'A';
            }
            index++;
      }
}

int main()
{

      char ch[10] = "abcd";

      convertToUpperCase(ch, 10);

      cout << "Convert String: " << ch;

      return 0;
}