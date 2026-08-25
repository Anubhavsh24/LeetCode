class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int a = 1;

        for (int x : nums) {
            if (x % k == 0) {
                int r = x / k;

                if (r == a) {
                    a++;
                }
            }
        }

        return a * k;
    }
};