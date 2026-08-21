class Solution {
public:
    long long count(long long x, vector<int>& coins) {
        int n = coins.size();
        long long ans = 0;

        for (int mask = 1; mask < (1 << n); mask++) {
            long long lcm = 1;
            bool overflow = false;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    long long g = gcd(lcm, 1LL * coins[i]);

                    // Prevent overflow and ignore LCM > x
                    if (lcm > x / (coins[i] / g)) {
                        overflow = true;
                        break;
                    }

                    lcm = (lcm / g) * coins[i];
                }
            }

            if (overflow || lcm > x)
                continue;

            long long multiples = x / lcm;

            if (__builtin_popcount(mask) % 2)
                ans += multiples;
            else
                ans -= multiples;
        }

        return ans;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        long long low = 1;
        long long high = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(mid, coins) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};