class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int max=0;
        int pos=0;
        for(int i=0;i<s.size();i++){
            if(st.count(s[i])==1){
                if(st.size()>max){
                    max=st.size();
                }
                st.clear();
                pos++;
                i=pos-1;
            }
            else{
                st.insert(s[i]);
            } 
        }
        if(st.size()>max){
            max=st.size();
            st.clear();
        }
        return max;

    }
};