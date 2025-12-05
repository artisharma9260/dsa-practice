#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> res;
       int count0 = 0;
       int count1 = 0;
       int count2 = 0;
       for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        count2++;
       } 
       while(count0){
        res.push_back(0);
        count0--;
       }
       while(count1){
        res.push_back(1);
        count1--;
       }
       while(count2){
        res.push_back(2);
        count2--;
       }
       for(int i = 0; i < nums.size(); i++){
        nums[i]= res[i];
       }
       
    }
};