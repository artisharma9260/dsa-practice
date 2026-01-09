#include<bits/stdc++.h>
using namespace std;
class solution{
    vector<int> maxMeetings(vector<int>& start,vector<int>& end){
        vector<tuple<int,int,int>>meeting;
        for(int i =0; i < start.size(); i++){
            meeting.push_back({end[i],start[i],i+1});
        }
        sort(meeting.begin(),meeting.end());
        vector<int> result;
        int lastEnd = -1;
        
        for(auto& m : meeting){
            int e = get<0>(m);
            int s = get<1>(m);
            int idx = get<2>(m);
            if(s > lastEnd){
                result.push_back(idx);
                lastEnd = e;
            }
        }
        return result;
    }
};