class Solution {
public:
    int digitFrequencyScore(int n) {
        int r=0;
        int sum=0;
        while(n>0){
            r=n%10;
            n=n/10;
            sum+=r;

        }
        return sum;
    }    
};