class Solution {
public:
    bool isPrime(int num){
        if(num<2) return false;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0) return false;
        }
        return true;
    }
    int smallestValue(int n) {
        while(!isPrime(n)){
            int ans=0;
            int x=n;
            for(int i=2;i*i<=x;i++){
                while(x%i==0){
                    ans+=i;
                    x/=i;
                }
                
            }
            if(x>1) ans+=x;
            if(ans==n) return ans;
            n=ans;
        }
        return n;
    }
};