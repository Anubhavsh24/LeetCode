class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,product=1;
        int num=n;
        while(num>0){
            int r=num%10;
            sum+=r;
            product*=r;
            num/=10;
        }
        if(n%(sum+product)==0) return true;
        return false;
    }
};