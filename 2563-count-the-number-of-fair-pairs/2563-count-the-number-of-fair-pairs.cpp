class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        return countPairs(nums, upper) - countPairs(nums, lower - 1);
    }

    long long countPairs(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        long long count = 0;

        while (i < j) {
            if (nums[i] + nums[j] <= target) {
                count += j - i;
                i++;
            } 
            else {
                j--;
            }
        }

        return count;
    }
};