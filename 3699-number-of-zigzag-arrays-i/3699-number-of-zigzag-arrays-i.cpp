class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) return m;

        vector<int> up(m + 1), down(m + 1);
        vector<int> newUp(m + 1), newDown(m + 1);
        vector<int> prefUp(m + 1), prefDown(m + 1);

        for (int x = 1; x <= m; x++) {
            up[x] = x - 1;
            down[x] = m - x;
        }

        for (int len = 3; len <= n; len++) {

            prefUp[0] = prefDown[0] = 0;

            for (int i = 1; i <= m; i++) {
                prefUp[i] = (prefUp[i - 1] + up[i]) % MOD;
                prefDown[i] = (prefDown[i - 1] + down[i]) % MOD;
            }

            int totalUp = prefUp[m];

            for (int x = 1; x <= m; x++) {
                newUp[x] = prefDown[x - 1];

                newDown[x] = totalUp - prefUp[x];
                if (newDown[x] < 0) newDown[x] += MOD;
            }

            swap(up, newUp);
            swap(down, newDown);
        }

        long long ans = 0;

        for (int x = 1; x <= m; x++) {
            ans = (ans + up[x] + down[x]) % MOD;
        }

        return (int)ans;
    }
};