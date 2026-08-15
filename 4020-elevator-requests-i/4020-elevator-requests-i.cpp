class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=requests[0];
        int m=requests.size();
        int i=1;
        while(i<m){
            ans+=abs(requests[i]-requests[i-1]);
            i++;
        }
        return ans;
    }
};