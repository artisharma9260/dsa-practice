#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp(nums.size(),0);
        int index=0;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] != 0){
            temp[index] = nums[i];
            index++;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = temp[i];
        }

    }
};