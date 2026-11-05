class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m=arr1.size(),n=arr2.size();
        int count=0,ans=0;
        for(int i=0;i<m;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(abs(arr1[i]-arr2[j])<=d) count++;
            }
            if(count==0) ans++;
        }
        return ans;
    }
};