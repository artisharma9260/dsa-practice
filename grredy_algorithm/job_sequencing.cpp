#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id;   
    int dead;  
    int profit; 
};

class Solution {
public:
    static bool comparison(Job a, Job b) {
        return (a.profit > b.profit);
    }

    pair<int, int> jobScheduling(Job arr[], int n) {
        sort(arr, arr + n, comparison);

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i].dead);
        }

 
        vector<int> slot(maxi + 1, -1);

        int countJobs = 0, totalProfit = 0;

        for (int i = 0; i < n; i++) {
 
            for (int j = arr[i].dead; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = arr[i].id;
                    countJobs++;
                    totalProfit += arr[i].profit;
                    break; 
                }
            }
        }

        return make_pair(countJobs, totalProfit);
    }
};