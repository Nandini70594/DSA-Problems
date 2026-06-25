class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n= nums.size();
        int ans=0;

        for(int start=0; start<n; start++){
            int targetCount = 0;
            int otherCount = 0;

            for(int end=start; end<n; end++){
                if(nums[end] == target){
                    targetCount += 1;
                } else{
                    otherCount += 1;
                }

                if(targetCount > otherCount)
                    ans += 1;
            }
        }
        return ans;
    }
};