#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int maxcount = INT_MIN;
        int count = 1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]) continue;
            else if((nums[i]+1) == nums[i+1]) count++;
            else{
                maxcount = max(maxcount , count);
                count = 1;
            }
        }
        maxcount = max(maxcount,count);
        return maxcount;
    }
};