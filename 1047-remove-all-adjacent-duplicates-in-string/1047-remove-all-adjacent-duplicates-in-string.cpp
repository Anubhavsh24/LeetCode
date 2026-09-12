class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(str=="" || str.back()!=s[i]) str.push_back(s[i]);
            else if(str.back()==s[i]) str.pop_back();

        }
        return str;
    }
};