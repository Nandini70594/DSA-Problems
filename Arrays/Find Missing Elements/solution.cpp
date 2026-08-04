class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<smallest){
                smallest = nums[i];
            } else if(nums[i]>largest){
                largest = nums[i];
            }
        }

        vector<int> ans;
        for(int i=smallest; i<=largest; i++){
            if(!count(nums.begin(), nums.end(), i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};