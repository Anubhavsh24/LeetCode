class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        int low=0;
        int high=x;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(1LL*mid*mid==x) return mid;
            else if(1LL*mid*mid<x){
                 low=mid+1;
                 ans=mid;
            }
            else high=mid-1;
        }
        return ans;
    }
};