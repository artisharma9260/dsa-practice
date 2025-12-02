#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int max_count = INT_MIN;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1) cnt++;
            
            else{
              max_count = max(max_count,cnt);
              cnt = 0;
            }
        }
        max_count = max(cnt,max_count);
        return max_count;

        
    }
};