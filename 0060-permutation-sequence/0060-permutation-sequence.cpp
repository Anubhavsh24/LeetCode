class Solution {
public:
    string helper(string str, int k, string ans){
        if(str==""){
            return ans;
        }
        int fact=1;
        int n=str.length(); 
        for(int i=2;i<n;i++){
            fact*=i;
        }
        int idx=k/fact;
        if(k%fact==0) --idx;
        char ch=str[idx];
        string left=str.substr(0,idx);
        string right=str.substr(idx+1);
        return helper(left+right,k-(idx*fact),ans+ch);
    }

    string getPermutation(int n, int k) {
        string str="";
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        string ans="";
        ans=helper(str,k,ans);
        return ans;
    }
};