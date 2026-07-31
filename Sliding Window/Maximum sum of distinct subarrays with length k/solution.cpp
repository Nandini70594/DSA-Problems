class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> s;
        long long currSum = 0, maxSum=0;
        int left=0;
        for(int right=0; right<nums.size(); right++){
            while(s.contains(nums[right]) || s.size()==k){
                s.erase(nums[left]);
                currSum-= nums[left];
                left++;
            }
            currSum+= nums[right];
            s.insert(nums[right]);
            if(s.size()==k){
                maxSum = max(currSum, maxSum);
            }
        }
        return maxSum;
    }
};