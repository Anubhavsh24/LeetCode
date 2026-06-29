class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        int first=0;
        int last=str.length()-1;
        while(first<last){
            if(str[first]!=str[last]) return false;
            first++;
            last--;
        }
        return true;
    }
};