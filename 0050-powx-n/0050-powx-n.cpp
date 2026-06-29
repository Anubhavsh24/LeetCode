class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        if(n==-1) return 1/x;
        double ans;
        ans=myPow(x,n/2);
        
        if(n%2!=0){
            if(n<0) return ans*ans*(1/x);
            else return ans*ans*x;
        }
        return ans*ans;
    }
};