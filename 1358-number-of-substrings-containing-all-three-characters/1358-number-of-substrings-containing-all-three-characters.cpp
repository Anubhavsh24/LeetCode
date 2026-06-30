class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int left=0;
        int freq[3]={0};
        int ans=0;
        for(int right=0;right<n;right++){

            if(s[right]=='a') ++freq[0];
            if(s[right]=='b') ++freq[1];
            if(s[right]=='c') ++freq[2];
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                ans+=n-right;
                freq[s[left] - 'a']--;
                left++;
            }

        }
        return ans;
    }
};