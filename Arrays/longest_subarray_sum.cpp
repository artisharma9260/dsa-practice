#include <bits/stdc++.h>
using namespace std;
class solution{
public:
   int longestsubarray(vector<int> &nums, int k){
   int n = nums.size();
     
    int maxlen = 0;
    int left = 0,right = 0;
    int sum = nums[0];
     
    while(right < n){
        while(left <= right && sum > k ){
            sum -= nums[left];
            left++;
         }
         
        if(sum == k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right < n) sum+=nums[right];
    }
    return maxlen;
   }
 };