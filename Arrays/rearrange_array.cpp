#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>posnum;
       vector<int>negnum;

       for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= 0){
            posnum.push_back(nums[i]);
        }
        else{
            negnum.push_back(nums[i]);
        }
       } 
       int j = 0;
       for(int i = 0; i < nums.size(); i=i+2){
          nums[i] = posnum[j];
          j++;
       }
       int k = 0;
       for(int i = 1; i < nums.size();i = i + 2){
          nums[i] = negnum[k];
          k++;
       }
       return nums;
    }
};