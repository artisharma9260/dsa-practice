#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum = sum+nums[j];
                maxsum = max(sum,maxsum);
            }
        }
        return maxsum;
    }
};