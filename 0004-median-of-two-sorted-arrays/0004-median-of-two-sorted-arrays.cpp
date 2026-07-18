class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        // int lo=m-1,hi=n-1;
        int i=0,j=0,k=0;
        vector<int> arr(m+n,0);
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                arr[k++]=nums1[i++];
            }
            else{
                arr[k++]=nums2[j++];
            }
        }
        while(i<m){
            arr[k++]=nums1[i++];
        }

        while(j<n){
            arr[k++]=nums2[j++];
        }
        int a=arr.size();
        if(a%2==1) return arr[a/2];
        return (arr[a/2-1]+arr[a/2])/2.0;
    }
};