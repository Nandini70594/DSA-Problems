class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<tuple<int, int, int>> v;

        // Store digit sum, number, and original index
        for (int i = 0; i < n; i++) {
            int sum = digitSum(nums[i]);
            v.push_back({sum, nums[i], i});
        }

        // Sort by digit sum, then by number
        sort(v.begin(), v.end());

        // Track the current position of each original index
        vector<int> pos(n);

        for (int i = 0; i < n; i++) {
            pos[get<2>(v[i])] = i;
        }

        int swaps = 0;

        // Count swaps using cycle decomposition
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] || pos[i] == i) {
                continue;
            }

            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = get<2>(v[j]);
                cycleSize++;
            }

            if (cycleSize > 1) {
                swaps += cycleSize - 1;
            }
        }

        return swaps;
    }
};