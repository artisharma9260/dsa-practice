#include<bits/stdc++.h>
using namespace std;
class shortestjobfirst {
public:
    float calculatewaitingTime(vector<int>& jobs){
        sort(jobs.begin(),jobs.end());
        
        float waitTime = 0;
        int totalTime = 0;
        int n = jobs.size();
        
        for(int i = 0; i < n; i++){
            waitTime += totalTime;
            totalTime += jobs[i];
        }
        return waitTime / n;
    }
};