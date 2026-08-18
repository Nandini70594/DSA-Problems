class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int largest=INT_MIN;
        for(int n : nums){
            freq[n]++;
            if(n>largest){
                largest = n;
            }
        }

        int val=-1;
        for(auto it : freq){
            if(it.second == 1){
                val = max(val, it.first);
            }
        }

        if(k == 1){
            return val;
        }

        if(k == nums.size()){
            return largest;
        }

        int ans = -1;

        if(freq[nums[0]] == 1)
            ans = max(ans, nums[0]);

        if(freq[nums.back()] == 1)
            ans = max(ans, nums.back());

        return ans;

    }
};