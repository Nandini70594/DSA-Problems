class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        int count = 0;
        int prev = 0;   // previous non-zero value

        for (int x : forts) {
            if (x == 0) {
                count++;
            }
            else {
                // Previous non-zero was 1 and current is -1,
                // OR previous was -1 and current is 1
                if (prev != 0 && prev != x) {
                    ans = max(ans, count);
                }

                // Current becomes the previous non-zero value
                prev = x;
                count = 0;
            }
        }

        return ans;
    }
};