// problem: Find the Largest Element in an Array 
// Category: Arrays 
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        return largest;
    }
};

