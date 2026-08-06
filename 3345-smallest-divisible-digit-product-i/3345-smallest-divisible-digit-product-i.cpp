class Solution {
public:
    int smallestNumber(int n, int t) {
        int num=n;
        while(1){
            int product=1;
            n=num;
            while(n){
                product*=n%10;
                n/=10;
            }
            if(product%t==0) return num;
            else ++num;
        }
        return num;
    }
};