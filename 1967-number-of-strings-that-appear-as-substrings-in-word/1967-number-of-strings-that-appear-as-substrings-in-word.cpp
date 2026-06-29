class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string x:patterns){
            int pos=-1;
            pos=word.find(x);
            if(pos>-1) ++count;
        }
        return count;
    }
};