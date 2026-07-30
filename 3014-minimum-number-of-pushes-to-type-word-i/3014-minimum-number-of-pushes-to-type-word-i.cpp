class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int m=(n-1)/8+1;
        return ((m-1)*m*4+(n-((m-1)*8))*m);
    }
};