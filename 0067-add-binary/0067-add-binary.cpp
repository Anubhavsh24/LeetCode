class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int m= a.length();
        int n=b.length();
        int carry=0;
        int var=min(m,n);
        for(int i=1;i<=var;i++){
            int sum=(a[m-i]-'0')+(b[n-i]-'0')+carry;
            ans.push_back((sum%2)+'0');
            carry=sum/2;
        }
        if(m!=n){
            if(var==m){
                var=n-m;
                for(int i=var-1;i>=0;i--){
                    int sum=(b[i]-'0')+carry;
                    ans.push_back((sum%2)+'0');
                    carry=sum/2;
                }
            }
        
            else{
                var=m-n;
                for(int i=var-1;i>=0;i--){
                    int sum=(a[i]-'0')+carry;
                    ans.push_back((sum%2)+'0');
                    carry=sum/2;
                }
            }
        }

        if(carry==1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};