#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        int n = nums.size();
        int i = 1;
        int idx = 1;

        while(i<n){
            if(nums[i] != nums[i-1]){
                nums[idx] = nums[i];
                idx++;
            }
            i++;
        }
        return idx;        
    }
};

int main(){

      Solution sol;

      vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

      int result = sol.removeDuplicates(nums);

      cout<<"Remove Duplicate from sorted Array: "<<result<<endl;

      return 0;
}