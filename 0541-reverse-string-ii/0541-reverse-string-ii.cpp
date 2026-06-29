class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i+=2*k){
            int m = s.length()-i;
            if(m<k){
                reverse(s.begin()+i,s.end());
                
            }
            else{
                reverse(s.begin()+i,s.begin()+i+k);
            }

        }
        return s;
    }
};