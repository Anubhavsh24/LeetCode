class Solution {
public:
    int count=0;
    int counting(vector<int>& nums, int lo,int mid, int hi){
        int left=lo;
        int right=mid+1;
        
        while(left<=mid && right<=hi){
            if((long long)nums[left] > 2LL * nums[right]){
                count+=(mid-left+1);
                right++;
            }
            else{
                left++;
            }
        }
        return count;
    }

    void merge(vector<int>& nums, int lo,int mid, int hi){
        vector<int> v;
        int left=lo;
        int right=mid+1;
        while(left<=mid && right<=hi){
            if(nums[left]<=nums[right]){
                v.push_back(nums[left]);
                left++;
            }
            else{
                v.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            v.push_back(nums[left]);
            left++;
        }
        while(right<=hi){
            v.push_back(nums[right]);
            right++;
        }
        for (int i = lo; i <= hi; i++) {
            nums[i] = v[i - lo];
        }
    }

    void mergesort(vector<int>& nums,int lo,int hi){
        if(lo>=hi) return;
        int mid=lo+(hi-lo)/2;
        mergesort(nums,lo,mid);
        mergesort(nums,mid+1,hi);
        counting(nums,lo,mid,hi);
        merge(nums,lo,mid,hi);
    }

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        mergesort(nums,lo,hi);;

        
        return count;
    }
};