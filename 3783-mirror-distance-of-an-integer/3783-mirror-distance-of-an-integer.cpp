class Solution {
public:
    int mirrorDistance(int n) {
        int m =n;
        int num=0;
        while(m>0){
            int r=m%10;
            m/=10;
            num=num*10+r;
        }
        return abs(n-num);
    }
};