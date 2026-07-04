class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        long lo=1;
        long hi=n-2;
        long mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            else if(arr[mid]<arr[mid-1]) hi=mid-1; 
            else lo=mid+1;
        }
        return 1;
    }
};