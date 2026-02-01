#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            unordered_map<char,int>mpp;
            for(int j = i; j < n; j++){
                mpp[s[j]]++;
                int maxFreq = 0,minFreq = INT_MAX;
                for(auto it:mpp){
                    maxFreq = max(maxFreq,it.second);
                    minFreq = min(minFreq,it.second);
                }
                sum += (maxFreq-minFreq);
            }
        }
        return sum;
        
    }
};