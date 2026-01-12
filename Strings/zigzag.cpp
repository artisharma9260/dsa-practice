#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
       if (numRows == 1 || numRows >=s.length()) {
        return s;
       } 
       vector<string> res(numRows);
       int n = s.length(), row=0;
       bool updown = false;
       for(int i = 0; i < n; i++){
        res[row] +=s[i];
        if(row==0 || row== numRows-1)
            updown =!updown;
        if(updown)
        row++;
        else
        row--;
       }
       string result;
       for(string word : res){
        result+= word;
       }
       return result;
    }
};