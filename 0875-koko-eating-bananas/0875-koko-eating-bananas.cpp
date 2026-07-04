class Solution {
public:
    bool check(int speed,vector<int> piles, int h){
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(count>h) return false;
            if(speed>=piles[i]) count++;
            else if(piles[i]%speed==0) count+=piles[i]/speed;
            else count+=piles[i]/speed+1;
        }
        if(count>h) return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int mx=-1;
        for(int x : piles){
            mx=max(x,mx);
        }
        int lo=1;
        int ans=-1;
        int hi=mx;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

        }
        return ans;
    }
};