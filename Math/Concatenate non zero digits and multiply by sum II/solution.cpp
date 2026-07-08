class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> digits;
        vector<int> positions;

        // Store non-zero digits and their original indices
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                digits.push_back(s[i] - '0');
                positions.push_back(i);
            }
        }

        int m = digits.size();

        // Prefix sum of digits
        vector<long long> prefixSum(m + 1, 0);
        for (int i = 0; i < m; i++) {
            prefixSum[i + 1] = prefixSum[i] + digits[i];
        }

        // Powers of 10
        vector<long long> power10(m + 1, 1);
        for (int i = 1; i <= m; i++) {
            power10[i] = (power10[i - 1] * 10) % MOD;
        }

        // Prefix numbers
        vector<long long> prefixNum(m + 1, 0);
        for (int i = 0; i < m; i++) {
            prefixNum[i + 1] = (prefixNum[i] * 10 + digits[i]) % MOD;
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            // First non-zero digit >= l
            int left = lower_bound(positions.begin(), positions.end(), l) - positions.begin();

            // Last non-zero digit <= r
            int right = upper_bound(positions.begin(), positions.end(), r) - positions.begin() - 1;

            // No non-zero digit in range
            if (left > right) {
                ans.push_back(0);
                continue;
            }

            int len = right - left + 1;

            // Extract concatenated number
            long long x = (prefixNum[right + 1] -
                          (prefixNum[left] * power10[len]) % MOD + MOD) % MOD;

            // Sum of digits
            long long sum = prefixSum[right + 1] - prefixSum[left];

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};