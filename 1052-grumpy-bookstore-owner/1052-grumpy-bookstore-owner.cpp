class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        int maxloss=0;
        int n=grumpy.size();
        int prevloss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i])
                prevloss+=customers[i];
        }
        maxloss=prevloss;
        int maxIdx=0;
        int i=1,j=k;
        while(j<n){
            int currloss=prevloss;
            if(grumpy[j]){
                currloss+=customers[j];
            }
            if(grumpy[i-1]){
                currloss-=customers[i-1];
            }
            if(maxloss<currloss){
                maxloss=currloss;
                maxIdx=i;
            }
            prevloss=currloss;
            i++;
            j++;
        }
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i]=0;
        }
        int maxsum=0;
        for(int i=0;i<n;i++){
            if(!grumpy[i]){
                maxsum+=customers[i];
            }
        }
        return maxsum;
    }
};