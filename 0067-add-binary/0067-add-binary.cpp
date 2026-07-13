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
            if(sum==0){
                ans.push_back('0');
                carry=0;
            }
            else if(sum==1){
                ans.push_back('1');
                carry=0;
            }
            else if(sum==2){
                ans.push_back('0');
                carry=1;
            }
            else{
                ans.push_back('1');
                carry=1;
            }
        }
        if(m!=n){
            if(var==m){
                var=n-m;
                for(int i=var-1;i>=0;i--){
                    int sum=(b[i]-'0')+carry;
                    if(sum==0){
                        ans.push_back('0');
                        carry=0;
                    }
                    else if(sum==1){
                        ans.push_back('1');
                        carry=0;
                    }
                    else if(sum==2){
                        ans.push_back('0');
                        carry=1;
                    }
                    else{
                        ans.push_back('1');
                        carry=1;
                    }
                }
            }
        
            else{
                var=m-n;
                for(int i=var-1;i>=0;i--){
                    int sum=(a[i]-'0')+carry;
                    if(sum==0){
                        ans.push_back('0');
                        carry=0;
                    }
                    else if(sum==1){
                        ans.push_back('1');
                        carry=0;
                    }
                    else if(sum==2){
                        ans.push_back('0');
                        carry=1;
                    }
                    else{
                        ans.push_back('1');
                        carry=1;
                    }
                }
            }
        }

        if(carry==1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};