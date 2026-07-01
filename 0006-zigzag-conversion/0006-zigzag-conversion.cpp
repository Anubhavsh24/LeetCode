class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int n=s.length();
        vector<string> row(numRows);
        int m=0;
        bool down=true;
        for(int i=0;i<n;i++){
            row[m]+=s[i];
            if(m==0) down=true;
            if(m==numRows-1) down=false;
            if(down==false){
                m--;
            }
            else{
                m++;
            }
        }
        string ans="";
        for(int i=0;i<row.size();i++){
            ans+=row[i];
        }

        return ans;
    }
};