class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int m = word1.length();
        int n = word2.length();
        int i=0;
        for(i;i<min(m,n);i++){
            str.push_back(word1[i]);
            str.push_back(word2[i]);
        }

        if(m<n){
            str.append(word2,i,n-m);
        }

        if(n<m){
            str.append(word1,i,m-n);
        }

        return str;

    }
};