class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int first=1;
        int sec=2;
        int ans=0;
        for(int i=3;i<=n;i++){
            ans=first+sec;
            first=sec;
            sec=ans;
        }
        return sec;
    }
};