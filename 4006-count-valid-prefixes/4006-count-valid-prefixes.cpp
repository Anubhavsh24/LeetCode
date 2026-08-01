class Solution {
public:
    int countValidPrefixes(string s) {
        int zc=0,oc=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                ++zc;
            }
            else ++oc;
            if(abs(zc-oc)<=1)  ++ans;
        }
        return ans;
    }
};