class Solution {
public:
    string fun1(int n, string k, int a) {
        if (a == n)
            return k;

        string ans = "";
        int count = 1;

        for (int i = 0; i < k.length() - 1; i++) {
            if (k[i] == k[i + 1]) {
                count++;
            } else {
                ans += to_string(count);
                ans += k[i];
                count = 1;
            }
        }
        ans += to_string(count);
        ans += k.back();

        return fun1(n, ans, a + 1);
    }

    string countAndSay(int n) {
        return fun1(n, "1", 1);
    }
};