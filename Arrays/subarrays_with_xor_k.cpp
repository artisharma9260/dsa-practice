#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int countsubarraysxor(vector<int> &A,int K){
    unordered_map<int,int>freq;
    freq[0] = 1;
    
    int prefixXor = 0;
    int count = 0;
    
    for(int num:A){
        prefixXor ^= num;
        
        int target = prefixXor ^ K;
        
        if(freq.find(target) != freq.end()){
            count += freq[target];
        }
        
        freq[prefixXor]++;
    }
    return count;
    }
};