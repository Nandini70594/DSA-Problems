class Solution {
public:
    vector<vector<bool>> subsetSum(vector<int>& arr, int sum) {
        int n = arr.size();

        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));

        for (int i = 0; i <= n; i++)
            dp[i][0] = true;

        for (int j = 1; j <= sum; j++)
            dp[0][j] = false;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        return dp;
    }

    int minDifference(vector<int>& arr) {
        int n = arr.size();

        int sum = 0;
        for (int x : arr)
            sum += x;

        vector<vector<bool>> dp = subsetSum(arr, sum);

        vector<int> possibleSums;

        // Traverse the last row
        for (int j = 0; j <= sum / 2; j++) {
            if (dp[n][j])
                possibleSums.push_back(j);
        }

        int mn = INT_MAX;

        // Find the minimum difference
        for (int s1 : possibleSums) {
            mn = min(mn, sum - 2 * s1);
        }

        return mn;
    }
};