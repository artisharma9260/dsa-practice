#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int countsubarraysxor(vector<int> &A,int B){
        int count = 0;
        for(int i = 0; i < A.size(); i++){
            int xorVal = 0;
            for(int j = i; j < A.size(); j++){
                xorVal ^= A[j];
                
                if(xorVal == B){
                    count++;
                }
            }
        }
        return count;
    }
};