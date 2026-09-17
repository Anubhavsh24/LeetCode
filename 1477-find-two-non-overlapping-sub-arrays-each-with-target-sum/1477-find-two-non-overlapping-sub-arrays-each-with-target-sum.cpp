class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        const int INF = 1e9;

        vector<int> best(n, INF);

        int left = 0;
        int sum = 0;
        int ans = INF;
        int minLen = INF;

        for (int right = 0; right < n; right++) {
            sum += arr[right];

            while (sum > target) {
                sum -= arr[left++];
            }

            // Carry forward the best subarray found so far
            if (right > 0)
                best[right] = best[right - 1];

            if (sum == target) {
                int len = right - left + 1;

                // Combine current window with best previous window
                if (left > 0 && best[left - 1] != INF) {
                    ans = min(ans, len + best[left - 1]);
                }

                // Current window can become the best one
                minLen = min(minLen, len);
                best[right] = min(best[right], minLen);
            }
        }

        return ans == INF ? -1 : ans;
    }
};