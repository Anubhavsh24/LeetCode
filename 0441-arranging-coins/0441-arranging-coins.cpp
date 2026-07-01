class Solution {
public:
    int arrangeCoins(int n) {
        long coin;
        long mid;
        long lo=0;
        long hi=n;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            coin=mid*(mid+1)/2;
            if(coin==n) return (int)mid;
            else if(coin<n) lo=mid+1;
            else hi=mid-1;
        }
        return (int)hi;
    }
};