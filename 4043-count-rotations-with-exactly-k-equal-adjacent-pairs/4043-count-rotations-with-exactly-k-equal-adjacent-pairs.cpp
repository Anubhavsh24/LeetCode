class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int score=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) score+=1;
        }
        int ans=0;
        if (score==k) ans=1;
        for(int i=n;i<2*n-1;i++){
            score += (s[i % n] == s[(i - 1) % n]);
            score -= (s[i % n] == s[(i + 1) % n]);
            if(score==k) ans++;

        }
        return ans;
    }
};