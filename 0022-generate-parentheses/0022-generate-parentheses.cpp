class Solution {
public:
    void generate(vector<string>& ans,int n, int o,int c, string str){
        if(str.length()==2*n){
            ans.push_back(str);
            return;
        }
        if(o<n){
            str+='(';
            generate(ans,n,o+1,c,str);
            str.pop_back();
        }
        
        if(o>c){
            str+=')';
            generate(ans,n,o,c+1,str);
            str.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans,n,0,0,"");
        return ans;
    }
};