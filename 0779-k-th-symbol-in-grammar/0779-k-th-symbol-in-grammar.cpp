class Solution {
public:
    int helper(int n , int k,int a){
        int as;
        if(n==1){
            return 0;
        }
        if(k%2==0)as=  helper(n-1,k/2,k);
        else as=  helper(n-1,(k+1)/2,k);
        if(k%2==0) return !as;
        else return as;
    }
    
    int kthGrammar(int n, int k) {
        int ans = helper(n,k,k);
        return ans;

    }
};