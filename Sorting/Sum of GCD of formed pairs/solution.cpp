class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int currMax= nums[0];
        vector<int> prefix;
        for(int i=0; i<nums.size(); i++){
            currMax = max(currMax, nums[i]);
            prefix.push_back(gcd(nums[i], currMax));
        }

        sort(prefix.begin(), prefix.end());
        long long left=0; 
        long long right = nums.size()-1;
        long long ans=0;
        while(left<right){
            ans+= gcd(prefix[left], prefix[right]);
            left++;
            right--;
        }
        return ans;
    }
};