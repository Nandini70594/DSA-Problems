class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen= INT_MAX;
        int left=0;
        int currSum=0;
        for(int right=0; right<nums.size(); right++){
            currSum+= nums[right];
            while(currSum>=target){
                if((right-left+1) < minlen){
                    minlen = right-left+1;
                }
                currSum-=nums[left];
                left++;
            }
        }
        if(minlen == INT_MAX) return 0;
        return minlen;
    }
};