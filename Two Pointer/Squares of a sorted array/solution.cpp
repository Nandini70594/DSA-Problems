class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int last=nums.size()-1;
        vector<int> ans(nums.size());

        while(left<=right){
            if(abs(nums[left]) > abs(nums[right])){
                ans[last] = nums[left]*nums[left];
                last--;
                left++;
            } else{
                ans[last]= nums[right]*nums[right];
                last--;
                right--;
            }
        }
        return ans;
    }
};