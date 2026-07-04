class Solution {
public:
    bool check(long long mid, vector<int>& time, int totalTrips){
        long long trips=0;
        int n=time.size();
        for(long long x: time){
            trips+=mid/x;
        }
        if (trips<totalTrips) return false;
        return true;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long lo =1;
        
        long long mn=*min_element(time.begin(),time.end());
        long long hi=mn*1LL*totalTrips;
        long long ans=-1;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};