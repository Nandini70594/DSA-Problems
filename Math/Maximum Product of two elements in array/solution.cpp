class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxProd;
        int n = nums.size();
        maxProd = (nums[n-1]-1)*(nums[n-2]-1);
        return maxProd;
    }
};