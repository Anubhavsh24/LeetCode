
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        long long k = (long long)k1 + k2;
        int n = nums1.size();

        vector<long long> diff(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            sum += diff[i];
        }

        if (sum <= k) return 0;

        sort(diff.rbegin(), diff.rend());

        diff.push_back(0);

        for (int i = 0; i < n; i++) {
            long long reduction = (diff[i] - diff[i + 1]) * (i + 1);

            if (k >= reduction) {
                k -= reduction;
            } else {
                long long level = diff[i] - k / (i + 1);
                long long rem = k % (i + 1);

                long long ans = 0;

                for (int j = 0; j <= i; j++) {
                    long long d = level - (j < rem ? 1 : 0);
                    ans += d * d;
                }

                for (int j = i + 1; j < n; j++) {
                    ans += diff[j] * diff[j];
                }

                return ans;
            }
        }

        return 0;
    }
};
