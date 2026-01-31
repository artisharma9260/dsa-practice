#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string doubles = s+s;
        int index = doubles.find(goal);
        if(index == -1) return false;
        return true;
    }
};