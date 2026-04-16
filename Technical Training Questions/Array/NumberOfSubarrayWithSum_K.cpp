#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int, int> mpp;
        mpp[0] = 1;

        int preSum = 0, cnt = 0;
        for(int i=0; i< arr.size(); i++)
        {
            preSum += arr[i];

            int remove = preSum - k;
            cnt += mpp[remove];

            mpp [preSum] += 1;
        }


        return cnt; 
    
        
    }
};
  
int main(){

      Solution sol;

      vector<int> arr = {1,1,1};
      int k = 2;

      int result = sol.subarraySum(arr, k);

      cout<<"Subarray Sum Equals K: "<<result<<endl;

      return 0;
} 