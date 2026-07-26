Approach 1-

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        long long product1 = 1LL * nums[nums.size() - 1] *
                             nums[nums.size() - 2] *
                             nums[nums.size() - 3];

        long long product2 = 1LL * nums[0] *
                             nums[1] *
                             nums[nums.size() - 1];

        return (int)max(product1, product2);
    }
};


Approach 2-

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest1 = INT_MIN;
        int largest2 = INT_MIN;
        int largest3 = INT_MIN;

        int smallest1 = INT_MAX;
        int smallest2 = INT_MAX;

        for (int x : nums) {

            // Update three largest numbers
            if (x >= largest1) {
                largest3 = largest2;
                largest2 = largest1;
                largest1 = x;
            }
            else if (x >= largest2) {
                largest3 = largest2;
                largest2 = x;
            }
            else if (x >= largest3) {
                largest3 = x;
            }

            // Update two smallest numbers
            if (x <= smallest1) {
                smallest2 = smallest1;
                smallest1 = x;
            }
            else if (x <= smallest2) {
                smallest2 = x;
            }
        }

        long long product1 = 1LL * largest1 * largest2 * largest3;
        long long product2 = 1LL * smallest1 * smallest2 * largest1;

        return (int)max(product1, product2);
    }
};