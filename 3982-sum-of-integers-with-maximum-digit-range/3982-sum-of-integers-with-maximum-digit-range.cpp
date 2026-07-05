class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int ans=0;
        int mxrang=0;
        for(int x:nums){
            if(x==0){
                continue;
            }
            int mn=9,mx=0;
            int cp=x;
            while(x>0){
                int r=x%10;
                x/=10;
                if(r>mx) mx=r;
                if(r<mn) mn=r;
            }
            int rang=mx-mn;
            if(rang>mxrang){
                mxrang=rang;
                ans=cp;
            }
            else if(rang==mxrang){
                ans+=cp;
            }
        }
        return ans;
    }
};