#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size()); 
        int posindex = 0;
        int negindex = 1;           

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                ans[negindex] = nums[i];
                negindex = negindex + 2;
            }
            else{
                ans[posindex] = nums[i];
                posindex = posindex + 2;
            }
        }
        return ans;
        
    }
};