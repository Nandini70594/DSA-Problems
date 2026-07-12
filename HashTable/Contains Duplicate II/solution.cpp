class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // If the number has been seen before
            if (mp.find(nums[i]) != mp.end()) {

                // Check the distance between indices
                if (i - mp[nums[i]] <= k)
                    return true;
            }

            // Update the latest index
            mp[nums[i]] = i;
        }

        return false;
    }
};