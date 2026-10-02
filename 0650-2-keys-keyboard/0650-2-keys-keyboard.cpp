class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int gd(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return n/i;

        }
        return 1;
    }
    int minSteps(int n) {
        int step=0;
        while(n>1){
            if(isPrime(n)){
                step+=n;
                break;
            }
            int hf=gd(n);
            step+=n/hf;
            n=hf;
        }
        return step;
    }
};