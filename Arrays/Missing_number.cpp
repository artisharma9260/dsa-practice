#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
      int req_sum = (n*(n+1))/2;  
      for(int i = 0 ;i < nums.size(); i++){
        sum = sum + nums[i];
      }
      return req_sum - sum;
    }
};