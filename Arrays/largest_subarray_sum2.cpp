#include<bits/stdc++.h>
using namespace std;
class subarraysolver{
public:
  int getLongestSubarray(vector<int>& a, int k){
    int n = a.size();
    int len = 0;
    for(int i = 0; i < n;i++){
        int sum=0;
        for(int j = i; j < n; j++){
            sum+=a[j];
            
            if(sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
      
  }
};