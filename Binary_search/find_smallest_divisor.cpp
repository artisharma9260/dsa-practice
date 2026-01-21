#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumbyd(vector<int>&nums,int div){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)(nums[i])/div);
        }
        return sum;

    }
    int bs(vector<int>&nums,int threshold){
        int low=1;
        int ans=-1;
        int high =*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sumbyd(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        return bs(nums,threshold);
        
    }
};