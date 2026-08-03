class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int> v;
        while(j<nums1.size() && i<nums2.size()){
            if (nums1[j] == nums2[i]) {
                if (v.empty() || v.back() != nums1[j])
                    v.push_back(nums1[j]);
                i++;
                j++;
            }
            else if(nums1[j]>nums2[i]) i++;
            else j++;
        }
        return v;

    }
};