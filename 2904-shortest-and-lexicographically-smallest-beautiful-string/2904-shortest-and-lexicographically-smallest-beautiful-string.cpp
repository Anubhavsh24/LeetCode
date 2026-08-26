class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0, j = 0;

        string fin = "";
        int count = 0;

        for (j = 0; j < n; j++) {

            if (s[j] == '1') {
                count++;
            }

            // Too many 1s -> move left
            while (count > k) {
                if (s[i] == '1')
                    count--;
                i++;
            }

            // Remove unnecessary leading zeros
            while (count == k && s[i] == '0') {
                i++;
            }

            // Now [i...j] is the shortest window
            // ending at j with exactly k ones
            if (count == k) {
                string ans = s.substr(i, j - i + 1);

                if (fin == "" || ans.length() < fin.length()) {
                    fin = ans;
                }
                else if (ans.length() == fin.length()) {
                    fin = min(fin, ans);
                }
            }
        }

        return fin;
    }
};