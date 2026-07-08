class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;

        for (char x : text) {
            freq[x]++;
        }

        int ans=min({freq['b'],freq['a'],freq['l']/2,freq['o']/2,freq['n']});
        return ans;
    }
};