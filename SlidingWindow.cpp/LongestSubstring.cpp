#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int hash[256];

        for(int i = 0; i < 256; i++){
            hash[i] = -1;
        }

        int l = 0, maxLen = 0;

        for(int r = 0; r < n; r++){
            if(hash[s[r]] != -1){
                l = max(hash[s[r]] + 1, l);
            }

            maxLen = max(maxLen, r - l + 1);
            hash[s[r]] = r;
        }

        return maxLen;
    }
};
