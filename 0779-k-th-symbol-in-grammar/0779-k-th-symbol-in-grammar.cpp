class Solution {
public:
    int helper(int n , int k){
        int as;
        if(n==1){
            return 0;
        }
        if(k%2==0)as=  helper(n-1,k/2);
        else as=  helper(n-1,(k+1)/2);
        if(k%2==0) return !as;
        else return as;
    }
    
    int kthGrammar(int n, int k) {
        int ans = helper(n,k);
        return ans;

    }
};