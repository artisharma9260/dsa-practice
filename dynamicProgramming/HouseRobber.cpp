class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int prev = nums[0];   // dp[i-1]
        int prev2 = 0;        // dp[i-2]

        for (int i = 1; i < n; i++) {
            int pick = nums[i] + prev2;
            int nonPick = prev;
            int cur = max(pick, nonPick);

            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
};
