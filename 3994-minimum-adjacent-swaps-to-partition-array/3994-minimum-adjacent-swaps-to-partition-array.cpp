class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long ans = 0;

        long long cnt0 = 0; // elements < a
        long long cnt1 = 0; // elements in [a, b]
        long long cnt2 = 0; // elements > b

        for (int x : nums) {
            if (x < a) {
                // Current is 0.
                // Previous 1s and 2s must cross it.
                ans += cnt1 + cnt2;
                cnt0++;
            }
            else if (x <= b) {
                // Current is 1.
                // Previous 2s must cross it.
                ans += cnt2;
                cnt1++;
            }
            else {
                // Current is 2.
                // Nothing before it is a problem.
                cnt2++;
            }
        }

        return ans % 1000000007;
    }
};