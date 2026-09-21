class Solution {
public:
    int maxProduct(int n) {
        string str=to_string(n);
        int m=str.length();
        sort(str.begin(),str.end());
        return (str[m-2]-'0')*(str[m-1]-'0');
    }
};