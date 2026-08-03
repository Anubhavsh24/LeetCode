class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        set<int> s;
        while(j<nums1.size() && i<nums2.size()){
            if(nums1[j]==nums2[i]){
                s.insert(nums2[i]);
                i++;j++;
            }
            else if(nums1[j]>nums2[i]) i++;
            else j++;
        }
        vector<int> v(s.begin(),s.end());
        return v;

    }
};