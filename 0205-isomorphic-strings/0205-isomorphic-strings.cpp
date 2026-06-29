class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> arr(150,1000);

        for(int i =0;i<s.size();i++){
            int n=(int)(s[i]);
            int m=s[i]-t[i];
            if(arr[n]==1000){
                arr[n]=m;
            }
            else if(arr[n]!=m) return false;
        }

        for(int i=0;i<150;i++){
            arr[i]=1000;
        }

         for(int i =0;i<s.size();i++){
            int n=(int)(t[i]);
            int m=t[i]-s[i];
            if(arr[n]==1000){
                arr[n]=m;
            }
            else if(arr[n]!=m) return false;
        }

        return true;

    }
};