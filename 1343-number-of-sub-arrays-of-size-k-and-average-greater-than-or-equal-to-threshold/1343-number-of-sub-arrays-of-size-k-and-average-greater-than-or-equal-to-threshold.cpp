class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=k*threshold) count++;
        int i=1,j=i+k-1;
        while(j<n){
            sum+=(arr[j]-arr[i-1]);
            if(sum>=k*threshold) count++;
            i++;j++;
        }
        return count;
    }
};