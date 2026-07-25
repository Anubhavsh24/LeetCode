class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int i,c=-1;
        for(string a : words){
            c++;
            if(a.find(x) != string::npos){
                
                ans.push_back(c);
            }
        }
        return ans;
    }
};