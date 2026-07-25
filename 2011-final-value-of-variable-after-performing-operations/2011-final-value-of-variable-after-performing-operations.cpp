class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string x: operations){
            if(x=="--X" || x=="X--"){
                ans--;
            }
            else if(x=="x"){
                continue;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};