class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+1.0);
        for(vector<int> booking: bookings){
            int left=booking[0];
            int right=booking[1];
            int seats=booking[2];
            diff[left-1]+=seats;
            diff[right]-=seats;
        }
        vector<int> ans(n,0);
        ans[0]=diff[0];
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+diff[i];
        }
        return ans;
    }
};