class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int a=-1,b=-1;
        a=s.find(x);
        b=s.find(y);
        if(a==-1 || b==-1) return s;
        string first="";
        string second="";
        string last="";
        for(char a: s){
            if(a==x) last.push_back(a);
            else if(a==y) first.push_back(a);
            else second.push_back(a);
        }
        return (first+second+last);
        
        
        
        
    }
};