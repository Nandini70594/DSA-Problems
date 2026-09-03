class Solution {
public:
    bool check(vector<int>& nums1, int targetpar) {
        int smallestOdd = INT_MAX;
        // Find the smallest odd element
        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i] % 2 == 1) {
                smallestOdd = min(smallestOdd, nums1[i]);
            }
        }

        for(int i = 0; i < nums1.size(); i++) {

            // Already has the target parity
            if(nums1[i] % 2 == targetpar) {
                continue;
            }

            // Wrong parity.
            // We need to subtract an odd number.
            // It must be smaller than nums1[i].
            if(smallestOdd >= nums1[i]) {
                return false;
            }
        }
        return true;
    }

    bool uniformArray(vector<int>& nums1) {
        return check(nums1, 0) || check(nums1, 1);
    }
};