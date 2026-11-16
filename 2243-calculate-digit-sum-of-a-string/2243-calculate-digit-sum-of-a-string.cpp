class Solution {
public:
    string fun(string str) {
        int sum = 0;

        for (char ch : str) {
            sum += ch - '0';
        }

        return to_string(sum);
    }
    string digitSum(string s, int k) {
        if(s.length()<=k) return s;
        string ex="";
        while(s.length()>k){
            for(int i=0;i<s.length();i+=k){
                ex+=fun(s.substr(i,k));
            }
            s=ex;
            ex="";
        }
        return s;
    }
};