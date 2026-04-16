#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
      int pivotIndex(vector<int> &nums)
      {
            int total = 0;

            for (int num : nums)
            {
                  total += num;
            }

            int leftsum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                  if (leftsum == total - leftsum - nums[i])
                  {
                        return i;
                  }
                  leftsum += nums[i];
            }

            return -1;
      }
};

int main()
{
      Solution sol;

      vector<int> nums = {1, 7, 3, 6, 5, 6};

      int result = sol.pivotIndex(nums);

      cout << "Pivot Index: " << result << endl;

      return 0;
}
